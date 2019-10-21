#include "bank_account.h"
#include <iostream>

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

void display (const BankAccount & account)
{
	std::cout << "Balance: " << account.balance << "\n";
}

std::ostream & operator << (std::ostream & out, const BankAccount & b)
{
	out << "Balance: " << b.balance << "\n";

	return out;
}

std::istream & operator >> (std::istream & in, BankAccount & b)
{
	int amt;

	std::cout << "\n" << "Enter amount: ";

	in >> amt;

	b.deposit(amt);

	return in;
}

BankAccount BankAccount::operator+(const BankAccount & b)
{
	BankAccount account;

	account.balance = balance + b.balance;
	
	return account;
}