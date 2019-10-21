//savings_account.cpp

#include "savings_account.h"

void SavingsAccount::add_interest()
{
	double interest = balance * interest_rate * time / 100;

	deposit(interest);
}

int SavingsAccount::get_balance() const
{
	double interest = balance * interest_rate * time;

	return interest + balance;
}