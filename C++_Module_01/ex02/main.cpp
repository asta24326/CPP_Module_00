#include <iostream>
#include <string>

int main(void) {
	std::string name = "HI THIS IS BRAIN";
	std::string* stringPTR = &name;
	std::string& stringREF = name;

	// print out addresses
	std::cout << &name << std::endl;
	std::cout << stringPTR << std::endl;
	std::cout << &stringREF << std::endl;

	// print out values
	std::cout << name << std::endl;
	std::cout << *stringPTR << std::endl;
	std::cout << stringREF << std::endl;

	return 0;
}