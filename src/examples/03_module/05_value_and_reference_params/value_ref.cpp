#include "value_ref.h"

/*
Write function code for pass_by_val_and_ref with
a value int num1 and ref int num2 parameter.
The function assigns 20 to num1 and 50 to num2
*/

void pass_by_val_and_ref(int num1, int & num2, const int & num3)
{//									   ^		^^^		 ^
	num1 = 100;		//should NOT change the parameter
	
	num2 = 50;		//SHOULD change the parameter

  //num3 = 100;		//'const' makes reference parameter read only (like a normal parameter)
}

/*
Write function prototype for pass_by_const_ref with
const int reference parameter num1.
Try to assign a value to num1, generates error.
*/
