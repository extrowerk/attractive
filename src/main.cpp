/*
 * Copyright 2018 Extrowerk <zmizsei@eextrowerk.com>
 * All rights reserved. Distributed under the terms of the MIT license.
 */

#include "attractive.h"

int main(int argc, char* argv[])
{
	/* Get the args, if not enough print usage info */

	if (argc < 2) { // We expect 2 arguments: the program name, and at least one workin folder path
		std::cout << "AttrActive - small CLI utility to copy ID3 tags to BEFS attributes" << std::endl;
		std::cerr << "Usage: " << argv[0] << " Path to the work folders" << std::endl;
		return 1;
	}

	/* Create a vector with the folders */

	std::vector <std::string> workingFolders;
	for (int i = 1; i < argc; ++i) { // Remember argv[0] is the path to the program, we want from argv[1] onwards
		workingFolders.push_back(argv[i]); // Add all to the vector.
	}

	/* Print the stat before we start to work */

	std::cout << "We have got " << workingFolders.size() << " folders:"<< std::endl;

	for (std::string data : workingFolders)
		std::cout << " * " << data << std::endl;

//	/*Check if the folders exists*/
//
//	struct stat st;
//	for (std::string data : workingFolders)
//		char y;
//		char *y = new char[data.length()+1];
//		std::strcpy(y, data.c_str());
//		if(stat(y,&st) == 0)
//			if(st.st_mode & S_IFDIR != 0)
//			std::cout << " * " << data << " folder exists"<< std::endl;

	/* Check if the folders are writeable */


	/* Checks if there any supported file /*


	/* It maintains a list about the supported files /*


	/* Takes the first file from the list, passes to TagLib /*


	/* TagLib extracts the ID3 tags and returns them /*


	/* AttrActive writes the BeFS attributes /*


	/* Identifies the file /*
	/* Check Tracker sources */

	/* Takes the next file from the list till its empty /*






	return 0;

}
