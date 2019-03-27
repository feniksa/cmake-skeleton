#include "test.h"
#include <iostream>

int main(int argc, const char** argv)
{
	for (int index = 0; index < argc; ++index) {
		std::cout << argv[index] << "\n";
	}

	cmake_skeleton::test();

	return 0;
}
