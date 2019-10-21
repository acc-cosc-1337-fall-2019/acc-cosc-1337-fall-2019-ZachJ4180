//atm.cpp

#include "atm.h"
#include <iostream>

using std::cout;

ATM::ATM(BankAccount a) : account(a)	//account(#) initializes constructor with object 'a'
{
	//class that gets data from database
}

void ATM::display_balance() const	//'ATM::' specifies its from the ATM class
{
	cout << "Balance" << account.get_balance() << "\n";		//try to add "\n" to any cout
}

void ATM::deposit(int amount)
{
	account.deposit(amount);
}

void ATM::withdraw(int amount)
{
	account.withdraw(amount);
}