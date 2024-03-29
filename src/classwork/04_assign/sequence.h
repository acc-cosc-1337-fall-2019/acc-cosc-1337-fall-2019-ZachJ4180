//write include statements for string and vector
#include <string>
#include <vector>

/*
Write prototype for void function display_vector that accepts a parameter const reference vector of strings
*/

void display_vector(vector const & vec);

/*
Write prototype for void function update_vector_element that accepts parameters reference vector of strings,
a string search_value, and a string replace_value.
*/

void update_vector_element(vector & vec, string search_value, string replace_value);