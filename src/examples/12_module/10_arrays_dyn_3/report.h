#include "bank_account.h"

//default constructor create dyanamic array of 5 Bank accounts
//display function iterate with an indexed for and display balance
//destructor free memory

class MyReport
{
public:

	MyReport();

	void diplay() const;

	~MyReport();


private:

	BankAccount **accounts;	//the '**' syntax means it is a pointer to a pre-existing pointer

	const int SIZE = 5;

};

MyReport::MyReport() : accounts{ new BankAccount*[SIZE] }	//"save 5 addresses in memory"
{
	//creates dynamic memory (exists within the HEAP instead of the STACK)

	accounts = new BankAccount*[SIZE];

	for (int i = 0; i < SIZE; i++)
	{
		accounts[i] = new BankAccount(i * 10); 	//calls the default constructor
	}
}

void MyReport::diplay() const
{
	for (int i = 0; i < SIZE; i++)
	{
		std::cout << accounts[i]->get_balance() << "\n";
	}
}

MyReport::~MyReport()
{
	for (int i = 0; i < SIZE; i++)
	{
		delete accounts[i];
	}

	delete[] accounts;
}