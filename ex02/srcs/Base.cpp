//############################################################
//#                                                          #
//#   ██████╗ ██████╗ ███╗   ██╗                             #
//#   ██╔══██╗╚════██╗████╗  ██║                             #
//#   ██████╔╝ █████╔╝██╔██╗ ██║                             #
//#   ██╔══██╗██╔═══╝ ██║╚██╗██║                             #
//#   ██████╔╝███████╗██║ ╚████║                             #
//#   ╚═════╝ ╚══════╝╚═╝  ╚═══╝                             #
//#                                                          #
//#   File    : Base.cpp                                     #
//#   Created : 2026-01-21 12:06                             #
//#   Updated : 2026-01-21 12:06                             #
//#                                                          #
//############################################################

#include "../includes/Base.hpp"
#include <typeinfo> // std::bad_cast

Base::~Base() {};

Base * generate(void)
{
	std::srand(std::time(NULL));
	int randNum = std::rand() % 3;
	if (randNum == 0)
		return new A();
	else if (randNum == 1)
		return new B();
	else
		return new C();
}

void identify(Base* p)
{
	if (dynamic_cast<A*>(p))
		std::cout << "A" << std::endl;
	else if (dynamic_cast<B*>(p))
		std::cout << "B" << std::endl;
	else if (dynamic_cast<C*>(p))
		std::cout << "C" << std::endl;
}

void identify(Base& p)
{
	try
	{
		(void)dynamic_cast<A&>(p);
		std::cout << "A" << std::endl;
		return;
	}
	catch (const std::bad_cast&)
	{
		try
		{
			(void)dynamic_cast<B&>(p);
			std::cout << "B" << std::endl;
			return;
		}
		catch (const std::bad_cast&)
		{
			try
			{
				(void)dynamic_cast<C&>(p);
				std::cout << "C" << std::endl;
				return;
			}
			catch (const std::bad_cast&)
			{
				std::cout << "Unknown Type" << std::endl;
			}
		}
	}
}
