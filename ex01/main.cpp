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
//#   Created : 2026-01-20 16:32                             #
//#   Updated : 2026-01-20 16:32                             #
//#                                                          #
//############################################################


#include "includes/ScalarConverter.hpp"

int main(int argc, char** argv)
{
	if (argc != 2)
	{
		std::cerr << "Usage: ./scalar_converter <literal>" << std::endl;
		return 1;
	}
	std::string literal = argv[1];
	ScalarConverter::convert(literal);
	return 0;
}