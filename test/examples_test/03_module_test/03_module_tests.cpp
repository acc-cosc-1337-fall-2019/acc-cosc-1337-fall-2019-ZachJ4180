#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "while.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Test while lop sum of squares")
{
	REQUIRE(sum_of_squares(4) == 30);
	// 1*1  +  2*2  +  3*3  +  4*4  ==  30
}