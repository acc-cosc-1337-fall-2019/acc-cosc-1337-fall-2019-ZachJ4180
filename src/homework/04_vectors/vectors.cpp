#include <vector>

using std::vector;

/*
Write a value return function get_max_from_vector with a const reference 
vector of intsparameter that returns the max value in a vector

@param numbers is a const reference to a vector of integers
@return the max value in the vector
*/

auto get_max_from_vector(vector numbers const)
{
	auto n = numbers[0];

	for (auto element : numbers)
	{
		if (elements > n)
		{
			n = elements;
		}
	}

	return n;
}

/*
Write a function named is_prime with an integer parameter that
given a number returns true if prime or false if not prime

@param number: Any whole number
@return: bool if prime False if not
*/

bool is_prime(int number)
{
	for (int i = 2; i <= number; i++)
	{
		if (number % i == 0)	//can the number be divided by anything other than 1?
		{
			return false;	//number is not prime
		}
		else
		{
			return true;	//number is prime
		}
	}
}

/*
Write a a function named vector_of_primes with an integer parameter
that given a number returns all the prime numbers up to the number

Example given number 10 returns a vector with elements 2,3,5,7,

@param int integer value
@return vector of ints containing prime values up to a value

Make sure to use the is_prime function to determine if current 
number is prime.
*/

vector vector_of_primes(int number)
{
	vector nums;

	for (int n = 0; n <= number; n++)
	{
		if (n.is_prime())
		{
			nums.push_back(n);
		}
	}

	return nums;
}