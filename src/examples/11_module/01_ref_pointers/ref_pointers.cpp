#include "ref_pointers.h"

//Shows that References AND Pointers can  m o d i f y  data

void ref(int &number, int* numberPtr)
{
	number = 500;

	*numberPtr = 1000;
}