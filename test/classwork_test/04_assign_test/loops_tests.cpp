#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "loops.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Test num(3) function") 
{
	REQUIRE(factorial(3) == 6);
}

TEST_CASE("Test num(4) function") 
{
	REQUIRE(factorial(4) == 24);
}

TEST_CASE("Test num(5) function") 
{
	REQUIRE(factorial(5) == 120);
}


