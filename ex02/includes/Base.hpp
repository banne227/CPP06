//############################################################
//#                                                          #
//#   ██████╗ ██████╗ ███╗   ██╗                             #
//#   ██╔══██╗╚════██╗████╗  ██║                             #
//#   ██████╔╝ █████╔╝██╔██╗ ██║                             #
//#   ██╔══██╗██╔═══╝ ██║╚██╗██║                             #
//#   ██████╔╝███████╗██║ ╚████║                             #
//#   ╚═════╝ ╚══════╝╚═╝  ╚═══╝                             #
//#                                                          #
//#   File    : Base.hpp                                     #
//#   Created : 2026-01-21 12:06                             #
//#   Updated : 2026-01-21 12:06                             #
//#                                                          #
//############################################################

#ifndef BASE_HPP
#define BASE_HPP

#include <cstdlib>   // rand(), srand()
#include <ctime>     // time()
#include <iostream>
#include <exception>
#include <string>

class Base
{
	public:
		virtual ~Base();
};

void identify(Base& p);
void identify(Base* p);
Base* generate();

class A : public Base {};
class B : public Base {};
class C : public Base {};

#endif