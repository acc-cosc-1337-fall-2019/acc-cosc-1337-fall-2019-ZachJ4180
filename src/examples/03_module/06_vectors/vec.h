#include<string>
#include<vector>

/*
Write function prototype for function loop_vector_w_index with no parameters.

*/

void loop_vector_w_index();

/*
Write function prototype for function loop_vector_w_index with a vector of int pass by value parameter.

*/
//pass by VALUE
void loop_vector_w_index(std::vector<int> nums);

/*
Write function prototype for function loop_vector_w_index_ref with a vector of int pass by reference parameter.
*/
//pass by REFERENCE '&'
void loop_vector_w_index_ref(std::vector<int> & nums);

/*
Write function prototype for function loop_vector_w_index with a vector of int const pass by reference parameter.
*/
//pass by REFERENCE (Constant: cant modify) 'const' '&' 
void loop_vector_w_index_const(const std::vector<int> & nums);

/*
Iterate vector with a for ranged loop (use auto)
*/

void loop_vector_w_for_ranged(const std::vector<int> & nums);