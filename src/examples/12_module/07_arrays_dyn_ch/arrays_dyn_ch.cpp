#include "arrays_dyn_ch.h"
#include <iostream>

void dynamic_char_array()
{
	const int SIZE = 10;

	char* name = new char[SIZE];

	std::cout << "Enter name: ";	//prompt
	std::cin.getline(name, SIZE);	//input
	std::cout << name << '\n';		//output	-	'\n' and "\n" work identically

	delete[] name;
	name = nullptr;


	char* name1 = new char[SIZE]();

	name1[0] = 'j';
	name1[1] = '0';
	name1[2] = 'e';
	name1[3] = '\0';	//terminates the array

	std::cout << name1 << "\n";

	delete[] name1;
	name1 = nullptr;


	char* name2 = new char[SIZE]();

	name2[0] = 'j';
	name2[1] = '0';
	name2[2] = 'e';
	name2[3] = 'n';

	std::cout << name2 << "\n";

	delete[] name2;
	name2 = nullptr;
}
