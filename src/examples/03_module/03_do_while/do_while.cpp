#include<iostream>
#include "do_while.h"
#include "switch.h"

using std::cout;
using std::cin;

//Write code for void function prompt_user to loop until
//user opts not to continue.  
void promt_user()
{
	auto user_choice = 'y';		//defaults to the "yes" choice, "no" being 'n'

	do								//executes code at least once ...
	{
		cout << "Continue? y or n";

		cin >> user_choice;

	}   while (user_choice == 'y');	//... then checks a condition to continue running code
		//the inner while loop(s) require a ;
}

string menu(int menu_option)
{
	switch (menu_option)	//if no return in a case, put  " break; "
	{
	case 1:					//if menu_option == 1...
		return "Option 1";
	case 2:
		return "Option 2";
	case 3:
		return "Option 3";
	case 4:
		return "Option 4";
	default:
		return "Invalid";
	}

}

//Write code for function run_menu that prompts  user for a 
//number from 1 to 4 and displays the option user selected.
/*
Use the existing menu_option function from /example/02_module/03_switch
folder.

*/
void run_menu()
{
	auto user_choice = 'y';

	auto choice = 0;

	do
	{
		cout << "Enter new menu option: ";

		cin >> choice;

		while (choice < 1 || choice > 4);
		{
			cout << "Enter a valid menu option: ";

			cin >> choice;
		}

		cout << menu(choice);

		cout << "Continue? y or n";

		cin >> user_choice;
	}	while (user_choice == 'y' || user_choice == 'Y');
}