//write include statements 
#include "sequence.h"
#include <iostream>
#include <vector>

/*
Write code for void function display_vector that accepts parameter const reference vector of strings.
The function will iterate through the vector and display a string per line.
*/

void display_vector(vector const & vec)
{
	for (string str : vec)
	{
		std::cout << str << "\n";
	}
}

/*
Write code for void function update_vector_element that accepts parameter reference vector of strings,
a string vector search_value, and a string replace_value.
The function will iterate through the vector and search for the search_value and if found will
replace the vector element with the replace_value.
*/

void update_vector_element(vector & vec, string search_value, string replace_value)
{
	for (auto elm : vec)
	{
		auto & elm_ref = elm;			//elm_ref references elm's position in stack

		if (elm == search_value)
		{
			elm_ref = replace_value;	//replaces elm's value with replace_value
		}
	}
}