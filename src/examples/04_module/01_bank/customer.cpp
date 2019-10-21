//customer.cpp

#include "customer.h"

using std::ostream;

void Customer::add_account(BankAccount act)
{
	total_balance += act.get_balance();
	
	accounts.push_back(act);
}
//ostream & operator << (ostream & out, const Customer & c) //customer.h declaration syntax
  ostream & operator << (ostream & out, const Customer & c)
{
	out << "Customer accounts: " << "\n";

	for (auto act : c.accounts)
	{
		out << act;
	}

	out << "\n" << "Total Balance: " << c.total_balance;

	return out;
}