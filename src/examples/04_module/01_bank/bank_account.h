//bank_account.h

class BankAccount	//do not capitalize or put ()
{
public:				//makes access global across all classes

	BankAccount();						//constructor(s) of the BankAccount class

	BankAccount(int b) : balance(b) {};	//fills the variable 'b' with 'balance' value

	void deposit(int amount);

	void withdraw(int amount);

	int get_balance() const;	//makes the function read only


private:			//makes access exclusive to within this class

	int balance;
};