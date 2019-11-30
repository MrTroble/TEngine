#pragma once

#include <fstream>
#include <string>
#include <stdio.h>
#include <vector>
#include <iostream>
#include "../util/Annotations.hpp"
#include "../Error.hpp"

#ifdef _WIN32
#include <direct.h>
#define GetCurrentDir _getcwd
#else
#include <unistd.h>
#define GetCurrentDir getcwd
#endif

namespace tge {
	namespace nio {

		using namespace std;

		typedef FILE* File;

		extern char current_working_dir[];

		struct ResourceDescriptor {
			uint64_t offset;
			uint64_t size;
		};

		/*
		 * Querys the current working directory and initalizes all other systems
		 *
		 * Use "current_working_dir" to get the cwd after quereing.
		 * (Is automatically called in startTGEngine())
		 */
		void initFileSystem();

		/*
		 * Opens the file
		 * (In debug mode it checks if the open was successfull)
		 */
		File open(char* name, char* mode);

		/*
		 * Opens the file and get's the size of the file
		 * (In debug mode it checks if the open was successfull)
		 * (the long* needs to be vailid pointer, will be checked in debug mode)
		 */
		File readFileSize(char* name, char* mode, /*OUT*/ long* fileLength);

		/*
		 * Reads all bytes out of a file
		 * (In debug mode it checks if the open was successfull)
		 */
		uint8_t* readAll(char* name);
	}
}