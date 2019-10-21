//bank_account.h
#include <iostream>

// header guards:
#ifndef BANK_ACCOUNT_H	//if bank_account.h is not defined...
#define BANK_ACCOUNT_H	//...define bank_account.h as the following:

class BankAccount	//do not capitalize or put ()
{
public:			//makes access global across all classes

	BankAccount();						//constructor(s) of the BankAccount class

	BankAccount(int b) : balance(b) {};	//fills the variable 'b' with 'balance' value


	virtual int get_balance() const;	//'virtual' makes the class heierarchy "polymorphic"

	void deposit(int amount);

	void withdraw(int amount);


	friend void display(const BankAccount & account);	//"friend" lets other classes use


	friend std::ostream & operator << (std::ostream & out, const BankAccount & b);

	friend std::istream & operator >> (std::istream & in, BankAccount & b);


	BankAccount operator+ (const BankAccount & b);


protected:

	int balance;

};

#endif	//ends definition of BANK_ACCOUNT_H