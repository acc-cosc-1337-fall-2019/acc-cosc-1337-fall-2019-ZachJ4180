#include <iostream>
#include <vector>
#include "bank_account.h"

using std::cout;
using std::vector;

int main()
{
	vector<BankAccount> accounts;

	BankAccount b1;

	accounts.push_back(b1);

	accounts.push_back(BankAccount(750));

	for (auto account : accounts)
	{
		cout << "Blance: " << account.get_balance() << "\n";
	}

	return 0;
}

/*
minnow
perch	-	bluegill
pike	-	catfish
gator	-	xxx
*/

/*
sparrow
crow	-	loon
hawk	-	stork/crane
xxx		-	eagle
*/

/*
mouse
racoon		-	marmot	-	fox
whitetail	-	beaver	-	coyote	-	boar
elk						-	wolf	-	bison
moose					-	bear
*/