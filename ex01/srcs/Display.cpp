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

bool isDisplayable(char c)
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
	std::cout << "float: " << static_cast<float>(c) << ".0f" << std::endl;
	std::cout << "double: " << static_cast<double>(c) << std::endl;
}

void displayImpossible()
{
	std::cout << "char: impossible" << std::endl;
	std::cout << "int: impossible" << std::endl;
	std::cout << "float: impossible" << std::endl;
	std::cout << "double: impossible" << std::endl;
}

int getIntValue(const std::string& literal, bool& success)
{
	int nb = 0;
	int s = 1;
	int i = 0;
	if (literal[i] == '-' || literal[i] == '+')
	{
		if (literal[i] == '-')
			s = -1;
		i++;
	}
	for (; literal[i]; i++)
	{
		if (literal[i] < '0' || literal[i] > '9')
			success = false;
		int digit = literal[i] - '0';
		if (nb > (INT_MAX - digit) / 10)
			success = false;
		nb = nb * 10 + digit;
	}
	nb *= s;
	return nb;
}

bool displayInt(const std::string& literal)
{
	bool success = true;
	int nb = getIntValue(literal, success);

	if (!success)
		return false;
	if (!isDisplayable(nb))
		std::cout << "char: Non displayable" << std::endl;
	else
		std::cout << "char: '" << static_cast<char>(nb) << "'" << std::endl;
	std::cout << "int: " << nb << std::endl;
	std::cout << "float: " << static_cast<float>(nb) << ".0f" << std::endl;
	std::cout << "double: " << static_cast<double>(nb) << std::endl;
	return true;
}

void displayFloat(const std::string& literal)
{
	float nb = strtof(literal.c_str(), NULL);
	long intPart = static_cast<long>(nb);
	int pointPos = literal.find('.');

	if (!isDisplayable(intPart))
		std::cout << "char: Non displayable" << std::endl;
	else
		std::cout << "char: '" << static_cast<char>(intPart) << "'" << std::endl;

	if (intPart > INT_MAX || intPart < INT_MIN)
		std::cout << "int: impossible" << std::endl;
	else
		std::cout << "int: " << static_cast<int>(nb) << std::endl;

	if (pointPos != -1 && literal.substr(pointPos + 1) == "0f")
		std::cout << "float: " << nb << ".0f" << std::endl;
	else
		std::cout << "float: " << nb << "f" << std::endl;
	std::cout << "double: " << static_cast<double>(nb) << std::endl;
}

void displayDouble(const std::string& literal)
{
	double nb = strtod(literal.c_str(), NULL);
	long intPart = static_cast<long>(nb);

	if (!isDisplayable(intPart))
		std::cout << "char: Non displayable" << std::endl;
	else
		std::cout << "char: '" << static_cast<char>(intPart) << "'" << std::endl;

	if (intPart > INT_MAX || intPart < INT_MIN)
		std::cout << "int: impossible" << std::endl;
	else
		std::cout << "int: " << static_cast<int>(nb) << std::endl;

	std::cout << "float: " << static_cast<float>(nb) << ".0f" << std::endl;
	std::cout << "double: " << nb << std::endl;
}

void displayPseudoLiteral(const std::string& literal)
{
	std::cout << "char: impossible" << std::endl;
	std::cout << "int: impossible" << std::endl;
	if (literal == "nan" || literal == "nanf")
	{
		std::cout << "float: nanf" << std::endl;
		std::cout << "double: nan" << std::endl;
	}
	else if (literal == "+inf" || literal == "+inff")
	{
		std::cout << "float: +inff" << std::endl;
		std::cout << "double: +inf" << std::endl;
	}
	else if (literal == "-inf" || literal == "-inff")
	{
		std::cout << "float: -inff" << std::endl;
		std::cout << "double: -inf" << std::endl;
	}
}