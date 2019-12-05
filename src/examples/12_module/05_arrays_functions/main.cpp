#include "arr_functions.h"
#include <iostream>

int main() 
{
	const int SIZE = 5;

	int hours[SIZE] = { 5, 10, 30, 20, 7 };	//	"hours" acts as a POINTER to the ADDRESS of the
											//	FIRST ELEMENT to reference the array as a whole
	int* hours_ptr = hours;

	iterate_array(hours_ptr, SIZE);

	std::cout << "\n";

	iterate_array(hours, SIZE);

	int* numbers = new int[SIZE];	//allocates memory ( __ addresses from the heap)

	for (int i = 0; i < SIZE; i++)	//sets the assigned addresses to 0 by default
	{
		numbers[i] = 0;
	}

	std::cout << "\n";

	for (int i = 0; i < SIZE; i++)	//cout's every element within the numbers array
	{
		std::cout << numbers[i] << "\n";
	}

	delete[] numbers;				//removes the numbers array from memory ("deallocate")

	numbers = nullptr;				//sets the numbers array to NULL

	return 0;
}