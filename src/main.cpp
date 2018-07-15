/*
 * Copyright 2018 Extrowerk <zmizsei@eextrowerk.com>
 * All rights reserved. Distributed under the terms of the MIT license.
 */

#include "attractive.h"

int main(int argc, char* argv[])
{
	if (argc < 2) { // We expect 2 arguments: the program name, and at least one workin folder path
		std::cout << "AttrActive - small CLI utility to copy ID3 tags to BEFS attributes" << std::endl;
		std::cerr << "Usage: " << argv[0] << " Path to the work folders" << std::endl;
		return 1;
	}

	std::vector <std::string> workingFolders;
	for (int i = 1; i < argc; ++i) { // Remember argv[0] is the path to the program, we want from argv[1] onwards
		workingFolders.push_back(argv[i]); // Add all to the vector.
	}

	std::cout << "We have got " << workingFolders.size() << " folders:"<< std::endl;

	for (std::string data : workingFolders)
		std::cout << " * " << data << std::endl;

	return 0;

}
