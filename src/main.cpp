/*
 * Copyright 2018 Your Name <your@email.address>
 * All rights reserved. Distributed under the terms of the MIT license.
 */

#include <iostream>
#include <string>
#include <vector>

int main(int argc, char* argv[])
{
	if (argc < 2) { // We expect 2 arguments: the program name, and at least one workin folder path
		std::cout << "AttrActive - small CLI utility to copy ID3 tags to BEFS attributes" << std::endl;
		std::cerr << "Usage: " << argv[0] << " Path to the work folders" << std::endl;
		return 1;
	}
}
