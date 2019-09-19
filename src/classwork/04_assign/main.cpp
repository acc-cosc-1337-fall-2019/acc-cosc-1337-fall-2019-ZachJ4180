//write include statements
#include<string>
#include<iostream>
#include "sequence.h"

//write using statements for cin cout
using std::cin;
using std::cout;

/*
Write code to create a vector of string names, add the values "John", "Mary", "Patty",
"Sam" to the vector, call the function display_vector and pass the names vector as
an argument, prompt user for a name to search for and a value to replace searched value with.
Afterward, call the update_vector_element with the names vector and call the display_vector
function.
Don't worry about displaying a message for values that aren't found.  Assume user will
give you a valid name.
*/

int main()
{
	//instantiates a vector 'vec' and fills it with values (names)

	vector vec;				

	vec.push_back("John");
	vec.push_back("Mary");
	vec.push_back("Patty");
	vec.push_back("Sam");


	//creates several placeholder strings to be used

	string replaced = "";

	string replaced_ref = & replaced;

	string replacing = "";


	//displays all the values within the vector 'vec'

	display_vector(vec);


	//prompts the user for a value they want to change and what they want to change it to

	std::cout << "Type the name you would like to edit: " << "\n";

	std::cin >> replaced;


	std::cout << "What would you like to change this name to? " << "\n";

	std::cin >> replacing;


	//replaces the original value with the new user input

	replaced_ref = replacing;	
}