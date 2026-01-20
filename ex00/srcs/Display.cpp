//############################################################
//#                                                          #
//#   ██████╗ ██████╗ ███╗   ██╗                             #
//#   ██╔══██╗╚════██╗████╗  ██║                             #
//#   ██████╔╝ █████╔╝██╔██╗ ██║                             #
//#   ██╔══██╗██╔═══╝ ██║╚██╗██║                             #
//#   ██████╔╝███████╗██║ ╚████║                             #
//#   ╚═════╝ ╚══════╝╚═╝  ╚═══╝                             #
//#                                                          #
//#   File    : Display.cpp                                  #
//#   Created : 2026-01-20 13:53                             #
//#   Updated : 2026-01-20 13:53                             #
//#                                                          #
//############################################################

#include "../includes/Display.hpp"


static bool isDisplayable(char c)
{
	return (c >= 32 && c <= 126);
}

void displayChar(const std::string& literal)
{
	char c;
	if (literal.length() == 1)
		c = literal[0];
	else
		c = literal[1];
	if (!isDisplayable(c))
		std::cout << "char: Non displayable" << std::endl;
	else
		std::cout << "char: '" << c << "'" << std::endl;
	std::cout << "int: " << static_cast<int>(c) << std::endl;
	std::cout << "float: " << static_cast<float>(c) << "f" << std::endl;
	std::cout << "double: " << static_cast<double>(c) << std::endl;
}

void displayImpossible()
{
	std::cout << "char: impossible" << std::endl;
	std::cout << "int: impossible" << std::endl;
	std::cout << "float: impossible" << std::endl;
	std::cout << "double: impossible" << std::endl;
}

bool displayInt(const std::string& literal)
{
	
}