#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "variables.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Verify sum_numbers function") 
{
	REQUIRE(add_numbers(5, 5) == 10);
	REQUIRE(add_numbers(10, 10) == 20);
}

TEST_CASE("Test get_sales_tax(10) function") 
{
	REQUIRE(get_sales_tax(10) == .675);
}

TEST_CASE("Test get_sales_tax(20) function") 
{
	REQUIRE(get_sales_tax(20) == 1.35);
}

TEST_CASE("Test get_tip_amount(20,15) function") 
{
	REQUIRE(get_tip_amount(20,15) == 3);
}

TEST_CASE("Test get_tip_amount(20,20) function") 
{
	REQUIRE(get_tip_amount(20,15) == 4);
}
