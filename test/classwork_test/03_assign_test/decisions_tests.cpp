#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "decision.h"


TEST_CASE("Test get_letter_grade_using_if(95) function") 
{
	REQUIRE(get_letter_grade_using_if(95) == 'A');
}

TEST_CASE("Test get_letter_grade_using_if(85) function") 
{
	REQUIRE(get_letter_grade_using_if(85) == 'B');
}

TEST_CASE("Test get_letter_grade_using_if(75) function") 
{
	REQUIRE(get_letter_grade_using_if(75) == 'C');
}

TEST_CASE("Test get_letter_grade_using_if(65) function") 
{
	REQUIRE(get_letter_grade_using_if(65) == 'D');
}

TEST_CASE("Test get_letter_grade_using_if(50) function") 
{
	REQUIRE(get_letter_grade_using_if(50) == 'F');
}

TEST_CASE("Test get_letter_grade_using_switch(95) function") 
{
	REQUIRE(get_letter_grade_using_switch(95) == 'A');
}

TEST_CASE("Test get_letter_grade_using_switch(85) function") 
{
	REQUIRE(get_letter_grade_using_switch(85) == 'B');
}

TEST_CASE("Test get_letter_grade_using_switch(75) function") 
{
	REQUIRE(get_letter_grade_using_switch(75) == 'C');
}

TEST_CASE("Test get_letter_grade_using_switch(65) function") 
{
	REQUIRE(get_letter_grade_using_switch(65) == 'D');
}

TEST_CASE("Test get_letter_grade_using_switch(50) function") 
{
	REQUIRE(get_letter_grade_using_switch(50) == 'F');
}
