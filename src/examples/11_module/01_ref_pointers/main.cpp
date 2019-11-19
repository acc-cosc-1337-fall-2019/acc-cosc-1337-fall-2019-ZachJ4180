#include "ref_pointers.h"

using std::cout;

int main() 
{
	int num1 = 10;
	int num2 = 20;
	
	int &num_ref = num1;
	int *num_ptr = num2;


	cout << "Num1: " << num1 << "Num2: " << num2 << "\n";

	ref(num_ref, num_ptr);

	cout << "Num1: " << num1 << "Num2: " << num2 << "\n";


	return 0;
}