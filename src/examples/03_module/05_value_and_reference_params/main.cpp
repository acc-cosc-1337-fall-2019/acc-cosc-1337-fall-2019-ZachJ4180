#include<iostream>

int main() 
{
	//preceeding a variable name with a '&' references the original variable's LOCATION
	// example: function(int num1, int & num2)
	// num1 = x would make a new value in the system memory
	// num2 = x would change the parameter

	int num = 5;

	std::cout << "Address: " << & num << "\n";	//prints nums LOCATION in system memory
	//							^
	std::cout << "Value: " << num << "\n";		//prints the VALUE in system memory

	int & num_ref = num;			//num_ref is given nums value

	std::cout << num_ref << "\n";	//prints num_ref

	num_ref = 10;					//creates a new variable with the value 10
	//
	std::cout << num_ref << "\n";	//prints the new num_ref

	std::cout << num << "\n";		//prints the original value of num
	
	return 0;
}