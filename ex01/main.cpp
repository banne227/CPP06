//############################################################
//#                                                          #
//#   ██████╗ ██████╗ ███╗   ██╗                             #
//#   ██╔══██╗╚════██╗████╗  ██║                             #
//#   ██████╔╝ █████╔╝██╔██╗ ██║                             #
//#   ██╔══██╗██╔═══╝ ██║╚██╗██║                             #
//#   ██████╔╝███████╗██║ ╚████║                             #
//#   ╚═════╝ ╚══════╝╚═╝  ╚═══╝                             #
//#                                                          #
//#   File    : main.cpp                                     #
//#   Created : 2026-01-20 16:32                             #
//#   Updated : 2026-01-20 16:32                             #
//#                                                          #
//############################################################


#include "includes/Serializer.hpp"

int main()
{
	Data data;
	data.n = 42;
	data.f = 3.14f;
	data.d = 2.71828;
	data.c = 'A';
	data.ptr = &data;

	std::cout << "Original Data:" << std::endl;
	std::cout << "n: " << data.n << " addr:" << &data.n << std::endl;
	std::cout << "f: " << data.f << " addr:" << &data.f << std::endl;
	std::cout << "d: " << data.d << " addr:" << &data.d << std::endl;
	std::cout << "c: " << data.c << " addr:" << &data.c << std::endl;
	std::cout << "ptr: " << data.ptr << " addr:" << &data.ptr << std::endl;
	uintptr_t raw = Serializer::serialize(&data);
	Data* deserializedData = Serializer::deserialize(raw);

	std::cout << "\nDeserialized Data:" << std::endl;
	std::cout << "n: " << deserializedData->n << " addr:" << &deserializedData->n << std::endl;
	std::cout << "f: " << deserializedData->f << " addr:" << &deserializedData->f << std::endl;
	std::cout << "d: " << deserializedData->d << " addr:" << &deserializedData->d << std::endl;
	std::cout << "c: " << deserializedData->c << " addr:" << &deserializedData->c << std::endl;
	std::cout << "ptr: " << deserializedData->ptr << " addr:" << &deserializedData->ptr << std::endl;

	return 0;
}