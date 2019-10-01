//bank_account.h

class BankAccount	//do not capitalize or put ()
{
public:				//makes access global across all classes

	BankAccount();	//CONSTRUCTOR: allows initialization of data within the class

	void deposit(int amount);

	int get_balance();

private:			//makes access exclusive to within this class

	int balance;
};