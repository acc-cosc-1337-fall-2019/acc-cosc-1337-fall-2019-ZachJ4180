#include "while.h"

//Using a while loop write code for sum_of_squares function that accepts an int and returns  
//the sum of all the squares of that number from 1 to the number. 
//Example: sum_of_squares(4) 
//1*1 + 2 * 2 + 3*3 + 4*4 = 30

int sum_of_squares(int num)
{
	auto sum = 0;	//auto handles the data type for us so long as you give it data
					//auto i; would NOT work | auto i = "yeehaw" WOULD work
	auto i = 0;

	while (i <= num)
	{
		sum += (i * i);

		i++;		//++i works the same way as i++ does (as do all modifiers)
	}

	return sum;
}

//Using a while loop write code for display function that accepts a string and displays 
//each character of the string in a line
//Example: display("Hello")
/*
result:

H
e
l
l
0

*/

//accessing a specific character within a string is "string name [index]"
//example: str[3] would return "l"

void display(string str)
{
	int i = 0;

	while(i < str.length())	//length returns the number of characters, not the final index
	{
		std::cout << str[i] << "\n";	// "\n" is an 'enter' or skips to the next line

		i++;
	}
}