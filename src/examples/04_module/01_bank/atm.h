//atm.h

#ifndef ATM_H
#define ATM_H

#include "bank_account.h"	//allows implimentation of other class functions

class ATM
{
public:

	ATM(BankAccount a);

	
	void deposit(int amount);

	void withdraw(int amount);

	void display_balance() const;	//const must go at the end


private:

	BankAccount account;	//creates an object named account of the BankAccount class
};

#endif