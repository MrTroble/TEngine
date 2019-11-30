import os
import os.path
import re

docsfld = "docs/docs/"
preset = None

with open(docsfld + "std.html") as std:
    preset = std.read()

def lineTest(line):
    spl = line.split("(")[0]
    return '(' in line and ')' in line and re.match(r"^[^=#]+$", spl) and re.search(r"\s", spl)
    

splitcommendreg = re.compile("^\/?\*")

def scanFile(file, name):
    tmp = ""
    tmpstr = ""
    name = name.replace(".hpp", "") + ".html"
    with open(file) as fp:
        rgl = fp.read()
        for line in rgl.split(";"):
            line = line.strip()
            tmpspl = re.split("[\n\r]", line)
            detail = ""
            for item in tmpspl:
                item = item.strip()
                if splitcommendreg.match(item):
                    detail += splitcommendreg.sub("", item) + "\n"
            detail = detail.strip().replace("\n", "<br>")
            if detail.endswith("/"):
                detail = detail[0:len(detail)-1]
            
            if lineTest(line):
                tmp += "<details><summary>" + tmpspl[len(tmpspl) - 1] + "</summary>" + detail + "</details>"
            if "struct" in line:
                tmpstr += "<details><summary>" + line.replace("struct ", "").split(" ")[0] + "</summary>" + detail + "\n<p>Attributes</p>" + line.split("{")[1].split("}")[0] + "</details>"
    if tmp == "" and tmpstr == "":
        return;
    print("<a href='" + name + "'>" + name.replace(".html", "") + "</a>")
    with open(docsfld + name, "w") as fp:
        fp.write(preset.replace("%DOCCONT%", tmp + "<h3>Structs</h3>\n" + tmpstr))
        


def searchTree(pth):
    for file in os.listdir(pth):
        pt = pth + "/" + file
        if os.path.isdir(pt):
            searchTree(pt)
            continue
        if file.endswith(".hpp"):
            scanFile(pt, file)


searchTree("TGEngine")
    
