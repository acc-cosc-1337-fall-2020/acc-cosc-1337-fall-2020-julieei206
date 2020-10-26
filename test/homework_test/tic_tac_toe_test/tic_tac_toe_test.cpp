#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "tic_tac_toe.h"

using std::cin;	using std::cout;

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Test game over if 9 slots are selected")
{
	TicTacToe test;
	test.start_game("X");
	for (int i = 0; i<8; i++)
	{
		test.mark_board(i);
		REQUIRE(test.game_over() == false);
	}
	
	test.mark_board(9);
	REQUIRE(test.game_over() == true);
}