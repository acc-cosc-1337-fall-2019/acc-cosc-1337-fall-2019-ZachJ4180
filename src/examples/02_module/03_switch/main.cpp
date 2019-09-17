#include <iostream>
#include "switch.h"

int main() 
{
	auto menu_option = 100;		//automatically assigns a data type to the value given

	std::cout << menu(menu_option);

	return 0;
}