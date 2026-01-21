//############################################################
//#                                                          #
//#   ██████╗ ██████╗ ███╗   ██╗                             #
//#   ██╔══██╗╚════██╗████╗  ██║                             #
//#   ██████╔╝ █████╔╝██╔██╗ ██║                             #
//#   ██╔══██╗██╔═══╝ ██║╚██╗██║                             #
//#   ██████╔╝███████╗██║ ╚████║                             #
//#   ╚═════╝ ╚══════╝╚═╝  ╚═══╝                             #
//#                                                          #
//#   File    : main.cpp                                     #
//#   Created : 2026-01-21 14:25                             #
//#   Updated : 2026-01-21 14:25                             #
//#                                                          #
//############################################################

#include "../includes/Base.hpp"

int main()
{
	Base* basePtr = generate();

	std::cout << "Identifying by pointer: ";
	identify(basePtr);

	std::cout << "Identifying by reference: ";
	identify(*basePtr);

	delete basePtr;
	return 0;
}