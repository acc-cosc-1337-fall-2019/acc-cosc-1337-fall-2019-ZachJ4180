#include "report.h"
#include <iostream>

Report::Report()
{
	//creates dynamic memory (exists within the HEAP instead of the STACK)
	accounts = new BankAccount[5];	//calls the default constructor
}

void Report::diplay() const
{
	for (int i = 0; i < SIZE; i++)
	{
		std::cout << accounts[i].get_balance() << "\n";
	}
}

Report::~Report()
{
	delete[] accounts;
}