//#include "report.h"
//#include <iostream>

//MyReport::MyReport() : accounts{new BankAccount[SIZE]}	//"save 5 addresses in memory"
//{
//	//creates dynamic memory (exists within the HEAP instead of the STACK)
//
//	for (int i = 0; i < SIZE; i++)
//	{
//		accounts[i] = new BankAccount*(i * 10); 	//calls the default constructor
//	}
//}

//void MyReport::diplay() const
//{
//	for (int i = 0; i < SIZE; i++)
//	{
//		std::cout << accounts[i]->get_balance() << "\n";
//	}
//}

//MyReport::~MyReport()
//{
//	for (int i = 0; i < SIZE; i++)
//	{
//		delete accounts[i];
//	}
//
//	delete[] accounts;
//}