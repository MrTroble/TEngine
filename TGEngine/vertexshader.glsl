#version 460
#pragma debug(on)
#pragma optimize(off)
#extension GL_ARB_separate_shader_objects : enable

layout(location = 1)in vec4 colorin;
layout(location = 1)out vec4 colorout;
layout(location = 0)in vec2 pos;
layout(location = 0)out vec4 posout;

out gl_PerVertex{
    vec4 gl_Position;
};

void main(){
    colorout = colorin;
    gl_Position = pos;
}