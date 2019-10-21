#include <iostream>
#include <vector>
#include "checking_account.h"
#include "savings_account.h"

//#include "b"

using std::cout;
using std::cin;
using std::vector;
using std::reference_wrapper;	//

int main()
{
	CheckingAccount c(1500);

	SavingsAccount s(500);


	vector <reference_wrapper<BankAccount>> accounts { c, s };


	for (auto act : accounts) 
	{
		cout << "Balance: " << act.get().get_balance() << "\n";	//.get() returns a class ref
	}


	return 0;
}

/*
minnow		-				-
trout		-	bluegill	-
pike		-	perch		-	box turtle
sturgeon	-	catfish		-	snapping turtle
gar(?)		-				-	gator
*/

/*
sparrow			-
crow			-	loon
hawk  (chicken)	-	stork/crane
owl		(goose)	-	eagle
*/

/*
mouse			-				-					-
racoon			-	marmot		-	fox		 (cat)	-
deer     (goat)	-	beaver		-	coyote			-	boar	(pig)
elk	    (horse)	-				-	wolf	 (dog)  -	bison	(cow)
moose			-				-	bear			-	
*/

/*
Human:
	sharp flint	-	sleep spot	-	fur clothing		-	
	flint knife	-	sleep roll	-	warm clothing		-	waist bag
	flint spear	-	lean-to		-	cloth clothing		-	shoulder bag
	flint axe	-	a-frame		-	warm clothing x2	-	sled
	bow/arrow	-	longhouse	-						-
*/

/*
herbalism		>	identification	>	health			>	medicine
manipulation	>	gathering		>	butchering		>	harvesting
farming			>	identification	>	herbs			>	crops
combat			>	attack			>	block/alt		>	proficiency
*/