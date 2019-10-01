#include "bank_account.h"

//bank_account.cpp

BankAccount::BankAccount()	//constructor, run first when class is referenced or called
{
	//code to read 'balance' variable from database

	balance = 500;		//placeholder
}

void BankAccount::deposit(int amount)
{
	if (amount > 0)
	{
		balance += amount;
	}
}

int BankAccount::get_balance()
{
	return balance;
}