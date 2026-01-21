//############################################################
//#                                                          #
//#   ██████╗ ██████╗ ███╗   ██╗                             #
//#   ██╔══██╗╚════██╗████╗  ██║                             #
//#   ██████╔╝ █████╔╝██╔██╗ ██║                             #
//#   ██╔══██╗██╔═══╝ ██║╚██╗██║                             #
//#   ██████╔╝███████╗██║ ╚████║                             #
//#   ╚═════╝ ╚══════╝╚═╝  ╚═══╝                             #
//#                                                          #
//#   File    : Display.hpp                                  #
//#   Created : 2026-01-20 13:53                             #
//#   Updated : 2026-01-20 13:53                             #
//#                                                          #
//############################################################

#ifndef DISPLAY_HPP
#define DISPLAY_HPP

#include <string>
#include <iostream>
#include <climits>
#include <cstdlib>

bool isDisplayable(char c);
void displayChar(const std::string& literal);
void displayImpossible();
int getIntValue(const std::string& literal, bool& success);
bool displayInt(const std::string& literal);
void displayFloat(const std::string& literal);
void displayDouble(const std::string& literal);
void displayPseudoLiteral(const std::string& literal);

#endif