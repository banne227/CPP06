//############################################################
//#                                                          #
//#   ██████╗ ██████╗ ███╗   ██╗                             #
//#   ██╔══██╗╚════██╗████╗  ██║                             #
//#   ██████╔╝ █████╔╝██╔██╗ ██║                             #
//#   ██╔══██╗██╔═══╝ ██║╚██╗██║                             #
//#   ██████╔╝███████╗██║ ╚████║                             #
//#   ╚═════╝ ╚══════╝╚═╝  ╚═══╝                             #
//#                                                          #
//#   File    : Verification.hpp                             #
//#   Created : 2026-01-21 11:20                             #
//#   Updated : 2026-01-21 11:20                             #
//#                                                          #
//############################################################

#ifndef VERIFICATION_HPP
#define VERIFICATION_HPP

#include "ScalarConverter.hpp"

bool	isPseudoLiteral(const std::string& str);
bool	isInteger(const std::string& str);
bool	isChar(const std::string& str);
bool	isFloat(const std::string& str);
bool	isDouble(const std::string& str);
int		getType(const std::string& literal);

#endif
