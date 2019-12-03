//write code for for stack_array and display each element to screen

#include "arrays_mem.h"
#include <iostream>

void stack_array()
{
	const int SIZE = 5;

	int hours[SIZE] = { 5, 10, 30, 20, 7 };

	hours[0] = 50;	//access and modify

	for (int i = 0; i < SIZE; i++)	//iterate through an array
	{
		std::cout << hours[i] << "\n";
	}

	std::cout << "\n";
	
	for (auto hour : hours)	//change "hour" to "&hour" to edit the original value in the loop
	{
		//&hour[#] = __ to make the change

		std::cout << hour << "\n";
	}

	std::cout << "\n";

	int* first_element = hours;

	std::cout << "First element: " << *first_element << "\n";

	std::cout << "Second element (add): " << *(first_element +1) << "\n";

	*first_element++;
	*first_element++;

	std::cout << "Third element: " << *first_element++ << "\n";

	*first_element--;

	std::cout << "Second element (sub): " << *first_element-- << "\n";

	std::cout << "\n";

	int* hours_ptr = hours;

	for (int i = 0; i < SIZE; i++)	//iterate through an array with a pointer (forwards)
	{
		std::cout << *hours_ptr << "\n";

		hours_ptr++;
	}

	std::cout << "\n";

	for (int i = 0; i < SIZE; i++)	//iterate through an array with a pointer (backwards)
	{
		hours_ptr--;

		std::cout << *hours_ptr << "\n";
	}
}