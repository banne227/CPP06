//############################################################
//#                                                          #
//#   ██████╗ ██████╗ ███╗   ██╗                             #
//#   ██╔══██╗╚════██╗████╗  ██║                             #
//#   ██████╔╝ █████╔╝██╔██╗ ██║                             #
//#   ██╔══██╗██╔═══╝ ██║╚██╗██║                             #
//#   ██████╔╝███████╗██║ ╚████║                             #
//#   ╚═════╝ ╚══════╝╚═╝  ╚═══╝                             #
//#                                                          #
//#   File    : ScalarConverter.cpp                                  #
//#   Created : 2026-01-20 13:03                             #
//#   Updated : 2026-01-20 13:03                             #
//#                                                          #
//############################################################

#include "../includes/ScalarConverter.hpp"
#include "../includes/Verification.hpp"

ScalarConverter::ScalarConverter() {};

ScalarConverter::~ScalarConverter() {};

ScalarConverter::ScalarConverter(const ScalarConverter& other) { (void)other; };

ScalarConverter& ScalarConverter::operator=(const ScalarConverter& other) 
{ 
	(void)other; 
	return *this; 
};

void ScalarConverter::convert(const std::string& literal)
{
	int type = getType(literal);
	switch (type)
	{
		case CHAR:
			displayChar(literal);
			break;		
		case INT:
			displayInt(literal);
			break;
		case FLOAT:
			displayFloat(literal);
			break;
		case DOUBLE:
			displayDouble(literal);
			break;
		case PSEUDO_LITERAL:
			displayPseudoLiteral(literal);
			break;
		case INVALID:
			std::cout << "Invalid literal for conversion." << std::endl;
			break;
	}
}