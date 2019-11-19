#include "memory_leak.h"

int main() 
{
	memory_leak();	//small memory leak		(creating	one pointer			w/o deleting)

	while (true)	//large memory leak		(creating	several pointers	w/o deleting)
	{
		memory_leak();		//the memory leak*
	}

	return 0;
}