#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "types.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Test sum_numbers function") 
{
	REQUIRE(sum_numbers(4, 4) == 8);
	REQUIRE(sum_numbers(5, 5) == 10);
	REQUIRE(sum_numbers(6, 6) == 12);

	//REQUIRE(sum_numbers(6, 7) == 12);  //meant to fail
}