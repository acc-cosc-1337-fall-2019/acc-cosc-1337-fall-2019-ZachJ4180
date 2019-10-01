#include "vec.h"

int main() 
{
	std::vector<int> nums(9, 1) //= { 99, 55, 1, 3, 66 };

	std::vector<std::string> strs(9, "A"); //fills the vector with 9 elements of " "

	std::vector<int> numsresult = ret_vec_int();

	loop_vector_w_index();
	
	loop_vector_w_index(nums);

	loop_vector_w_index_ref(nums);

	loop_vector_w_index_const(nums);

	loop_vector_w_for_ranged(nums);

	return 0;
}