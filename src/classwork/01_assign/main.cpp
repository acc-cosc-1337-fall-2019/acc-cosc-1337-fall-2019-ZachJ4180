//Write the include statement for types.h here
#include "types.h"	//"__" usually means the code was hand written / not imported
#include <iostream>	//lets you use cout

//Write include for capturing input from keyboard and displaying output to screen
using std::cout;

int main() 
{
	int result = sum_numbers(5, 5);

	cout << "Result: " << result;	//displays text / result of funct. to screen

	return 0;
}