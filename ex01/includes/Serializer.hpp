//############################################################
//#                                                          #
//#   ██████╗ ██████╗ ███╗   ██╗                             #
//#   ██╔══██╗╚════██╗████╗  ██║                             #
//#   ██████╔╝ █████╔╝██╔██╗ ██║                             #
//#   ██╔══██╗██╔═══╝ ██║╚██╗██║                             #
//#   ██████╔╝███████╗██║ ╚████║                             #
//#   ╚═════╝ ╚══════╝╚═╝  ╚═══╝                             #
//#                                                          #
//#   File    : Serializer.hpp                               #
//#   Created : 2026-01-21 11:33                             #
//#   Updated : 2026-01-21 11:33                             #
//#                                                          #
//############################################################

#ifndef SERIALIZER_HPP
#define SERIALIZER_HPP

#include <string>
#include <stdexcept>
#include <limits>
#include <iostream>
#include <stdint.h>

typedef struct Data
{
	int		n;
	float	f;
	double	d;
	char	c;
	void *ptr;

} Data;

class Serializer
{
	public:
		Serializer();
		~Serializer();
		Serializer(const Serializer& other);
		Serializer& operator=(const Serializer& other);

		static uintptr_t serialize(Data* ptr);
		static Data* deserialize(uintptr_t raw);
};


#endif