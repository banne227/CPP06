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

static bool isPseudoLiteral(const std::string& str)
{
	return (str == "nan" || str == "+inf" || str == "-inf" ||
			str == "nanf" || str == "+inff" || str == "-inff");
}

static bool isInteger(const std::string& str)
{
	size_t i = 0;
	if (str[i] == '+' || str[i] == '-')
		i++;
	if (i == str.length())
		return false;
	while (i < str.length())
	{
		if (!std::isdigit(str[i]))
			return false;
		i++;
	}
	return true;
}

static bool isChar(const std::string& str)
{
	if (str.length() == 1 && !std::isdigit(str[0]))
		return true;
	if (str.length() == 3 && str[0] == '\'' && str[2] == '\'' && !std::isdigit(str[1]))
		return true;
	return false;
}

static bool isFloat(const std::string& str)
{
	int i =  str.find('.');
	int length = str.length();
	if (i == -1 || i == 0 || i == length - 1
		|| length < 4 || str[length - 1] != 'f')
		return false;
	for (int j = 0; j < length - 1; j++)
	{
		if (j == 0 && (str[j] == '+' || str[j] == '-'))
			continue;
		if (j == i)
			continue;
		if (!std::isdigit(str[j]))
			return false;
	}
	return true;
}

static bool isDouble(const std::string& str)
{
	int i =  str.find('.');
	int length = str.length();
	if (i == -1 || i == 0 || i == length - 1 || length < 4)
		return false;
	for (int j = 0; j < length - 1; j++)
	{
		if (j == 0 && (str[j] == '+' || str[j] == '-'))
			continue;
		if (j == i)
			continue;
		if (!std::isdigit(str[j]))
			return false;
	}
	return true;
}	

int	getType(const std::string& literal)
{
	if (isChar(literal))
		return CHAR;
	else if (isInteger(literal))
		return INT;
	else if (isFloat(literal))
		return FLOAT;
	else if (isDouble(literal))
		return DOUBLE;
	else if (isPseudoLiteral(literal))
		return PSEUDO_LITERAL;
	else
		return INVALID;
}

void ScalarConverter::convert(const std::string& literal)
{
	int type = getType(literal);
	switch (type)
	{
		case CHAR:
			{
				
			}
			break;			
		case INT:

		case FLOAT:

		case DOUBLE:
		
		case PSEUDO_LITERAL:

		case INVALID:
			std::cout << "Invalid literal for conversion." << std::endl;
			break;
	}
}