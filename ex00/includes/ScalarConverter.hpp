//############################################################
//#                                                          #
//#   ██████╗ ██████╗ ███╗   ██╗                             #
//#   ██╔══██╗╚════██╗████╗  ██║                             #
//#   ██████╔╝ █████╔╝██╔██╗ ██║                             #
//#   ██╔══██╗██╔═══╝ ██║╚██╗██║                             #
//#   ██████╔╝███████╗██║ ╚████║                             #
//#   ╚═════╝ ╚══════╝╚═╝  ╚═══╝                             #
//#                                                          #
//#   File    : ScalarConverter.hpp                          #
//#   Created : 2026-01-20 13:04                             #
//#   Updated : 2026-01-20 13:04                             #
//#                                                          #
//############################################################

#ifndef ScalarConverter_HPP
#define ScalarConverter_HPP

#include <string>
#include <stdexcept>
#include <limits>
#include <iostream>
#include "Display.hpp"

class ScalarConverter
{
	public:
		static void convert(const std::string& literal);
};

typedef enum eType
{
	CHAR,
	INT,
	FLOAT,
	DOUBLE,
	PSEUDO_LITERAL,
	INVALID
}	tType;

#endif