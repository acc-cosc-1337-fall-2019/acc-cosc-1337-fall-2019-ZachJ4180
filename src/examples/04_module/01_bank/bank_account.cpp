#include "bank_account.h"

//bank_account.cpp

BankAccount::BankAccount()	//constructor, runs first when class is referenced or called
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

int BankAccount::get_balance() const	//need to initialize as const in '.h' as well
{
	return balance;
}

void BankAccount::withdraw(int amount)
{
	if (balance > amount)
	{
		balance -= amount;
	}
}