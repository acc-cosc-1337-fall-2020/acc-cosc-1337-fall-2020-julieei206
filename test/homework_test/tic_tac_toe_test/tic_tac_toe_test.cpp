#define CATCH_CONFIG_MAIN
#include <memory>
#include "catch.hpp"
#include "tic_tac_toe.h"
#include "tic_tac_toe_3.h"
#include "tic_tac_toe_4.h"

using std::unique_ptr;	using std::make_unique;

TEST_CASE("Verify Test Configuration", "verification") 
{
	REQUIRE(true == true);
}

TEST_CASE("Test get 3x3 player x")
{
	std::unique_ptr<TicTacToe> tic_tac_toe;
	tic_tac_toe = std::make_unique<TicTacToe3>();
	tic_tac_toe->start_game("x");

	REQUIRE(tic_tac_toe->get_player() == "x");
}

TEST_CASE("Test get 3x3 player o")
{
	std::unique_ptr<TicTacToe> tic_tac_toe;
	tic_tac_toe = std::make_unique<TicTacToe3>();
	tic_tac_toe->start_game("o");

	REQUIRE(tic_tac_toe->get_player() == "o");
}

TEST_CASE("Test 3x3 first column win")
{
	std::unique_ptr<TicTacToe> tic_tac_toe;
	tic_tac_toe = std::make_unique<TicTacToe3>();
	tic_tac_toe->start_game("x");

	tic_tac_toe->mark_board(1);
	REQUIRE(tic_tac_toe->game_over() == false);

	tic_tac_toe->mark_board(2);
	REQUIRE(tic_tac_toe->game_over() == false);

	tic_tac_toe->mark_board(4);
	REQUIRE(tic_tac_toe->game_over() == false);

	tic_tac_toe->mark_board(3);
	REQUIRE(tic_tac_toe->game_over() == false);

	tic_tac_toe->mark_board(7);
	REQUIRE(tic_tac_toe->game_over() == true);
}

TEST_CASE("Test 3x3 second column win")
{
	std::unique_ptr<TicTacToe> tic_tac_toe;
	tic_tac_toe = std::make_unique<TicTacToe3>();
	tic_tac_toe->start_game("x");

	tic_tac_toe->mark_board(2);
	REQUIRE(tic_tac_toe->game_over() == false);
	
	tic_tac_toe->mark_board(3);
	REQUIRE(tic_tac_toe->game_over() == false);
	
	tic_tac_toe->mark_board(5);
	REQUIRE(tic_tac_toe->game_over() == false);
	
	tic_tac_toe->mark_board(6);
	REQUIRE(tic_tac_toe->game_over() == false);
	
	tic_tac_toe->mark_board(8);
	REQUIRE(tic_tac_toe->game_over() == true);
}

TEST_CASE("Test 3x3 third column win")
{
	std::unique_ptr<TicTacToe> tic_tac_toe;
	tic_tac_toe = std::make_unique<TicTacToe3>();
	tic_tac_toe->start_game("x");

	tic_tac_toe->mark_board(3);
	REQUIRE(tic_tac_toe->game_over() == false);
	
	tic_tac_toe->mark_board(2);
	REQUIRE(tic_tac_toe->game_over() == false);
	
	tic_tac_toe->mark_board(6);
	REQUIRE(tic_tac_toe->game_over() == false);
	
	tic_tac_toe->mark_board(4);
	REQUIRE(tic_tac_toe->game_over() == false);
	
	tic_tac_toe->mark_board(9);
	REQUIRE(tic_tac_toe->game_over() == true);
}

TEST_CASE("Test 3x3 second diagonal win")
{
	std::unique_ptr<TicTacToe> tic_tac_toe;
	tic_tac_toe = std::make_unique<TicTacToe3>();
	tic_tac_toe->start_game("x");

	tic_tac_toe->mark_board(3);
	REQUIRE(tic_tac_toe->game_over() == false);
	
	tic_tac_toe->mark_board(2);
	REQUIRE(tic_tac_toe->game_over() == false);
	
	tic_tac_toe->mark_board(5);
	REQUIRE(tic_tac_toe->game_over() == false);
	
	tic_tac_toe->mark_board(4);
	REQUIRE(tic_tac_toe->game_over() == false);
	
	tic_tac_toe->mark_board(7);
	REQUIRE(tic_tac_toe->game_over() == true);
}

TEST_CASE("Test 3x3 first row win")
{
	std::unique_ptr<TicTacToe> tic_tac_toe;
	tic_tac_toe = std::make_unique<TicTacToe3>();
	tic_tac_toe->start_game("x");

	tic_tac_toe->mark_board(1);
	REQUIRE(tic_tac_toe->game_over() == false);
	
	tic_tac_toe->mark_board(4);
	REQUIRE(tic_tac_toe->game_over() == false);
	
	tic_tac_toe->mark_board(2);
	REQUIRE(tic_tac_toe->game_over() == false);
	
	tic_tac_toe->mark_board(5);
	REQUIRE(tic_tac_toe->game_over() == false);
	
	tic_tac_toe->mark_board(3);
	REQUIRE(tic_tac_toe->game_over() == true);
}

TEST_CASE("Test 3x3 second row win")
{
	std::unique_ptr<TicTacToe> tic_tac_toe;
	tic_tac_toe = std::make_unique<TicTacToe3>();
	tic_tac_toe->start_game("x");

	tic_tac_toe->mark_board(4);
	REQUIRE(tic_tac_toe->game_over() == false);
	
	tic_tac_toe->mark_board(2);
	REQUIRE(tic_tac_toe->game_over() == false);
	
	tic_tac_toe->mark_board(5);
	REQUIRE(tic_tac_toe->game_over() == false);
	
	tic_tac_toe->mark_board(3);
	REQUIRE(tic_tac_toe->game_over() == false);
	
	tic_tac_toe->mark_board(6);
	REQUIRE(tic_tac_toe->game_over() == true);
}

TEST_CASE("Test 3x3 third row win")
{
	std::unique_ptr<TicTacToe> tic_tac_toe;
	tic_tac_toe = std::make_unique<TicTacToe3>();
	tic_tac_toe->start_game("x");

	tic_tac_toe->mark_board(7);
	REQUIRE(tic_tac_toe->game_over() == false);
	
	tic_tac_toe->mark_board(2);
	REQUIRE(tic_tac_toe->game_over() == false);
	
	tic_tac_toe->mark_board(8);
	REQUIRE(tic_tac_toe->game_over() == false);
	
	tic_tac_toe->mark_board(3);
	REQUIRE(tic_tac_toe->game_over() == false);
	
	tic_tac_toe->mark_board(9);
	REQUIRE(tic_tac_toe->game_over() == true);
}

TEST_CASE("Test 3x3 first diagonal win")
{
	std::unique_ptr<TicTacToe> tic_tac_toe;
	tic_tac_toe = std::make_unique<TicTacToe3>();
	tic_tac_toe->start_game("x");

	tic_tac_toe->mark_board(1);
	REQUIRE(tic_tac_toe->game_over() == false);
	
	tic_tac_toe->mark_board(2);
	REQUIRE(tic_tac_toe->game_over() == false);
	
	tic_tac_toe->mark_board(5);
	REQUIRE(tic_tac_toe->game_over() == false);
	
	tic_tac_toe->mark_board(3);
	REQUIRE(tic_tac_toe->game_over() == false);
	
	tic_tac_toe->mark_board(9);
	REQUIRE(tic_tac_toe->game_over() == true);
}

TEST_CASE("Test 3x3 ends if board is full")
{
	std::unique_ptr<TicTacToe> tic_tac_toe;
	tic_tac_toe = std::make_unique<TicTacToe3>();
	tic_tac_toe->start_game("x");

	tic_tac_toe->mark_board(1);
	REQUIRE(tic_tac_toe->game_over() == false);
	tic_tac_toe->mark_board(2);
	REQUIRE(tic_tac_toe->game_over() == false);
	tic_tac_toe->mark_board(3);
	REQUIRE(tic_tac_toe->game_over() == false);
	tic_tac_toe->mark_board(4);
	REQUIRE(tic_tac_toe->game_over() == false);
	tic_tac_toe->mark_board(5);
	REQUIRE(tic_tac_toe->game_over() == false);
	tic_tac_toe->mark_board(7);
	REQUIRE(tic_tac_toe->game_over() == false);
	tic_tac_toe->mark_board(6);
	REQUIRE(tic_tac_toe->game_over() == false);
	tic_tac_toe->mark_board(9);
	REQUIRE(tic_tac_toe->game_over() == false);
	tic_tac_toe->mark_board(8);
	REQUIRE(tic_tac_toe->game_over() == true);
	REQUIRE(tic_tac_toe->get_winner() == "t");
}

TEST_CASE("Test 4x4 ends if board is full")
{
	std::unique_ptr<TicTacToe> tic_tac_toe;
	tic_tac_toe = std::make_unique<TicTacToe4>();
	tic_tac_toe->start_game("x");

	tic_tac_toe->mark_board(1);
	REQUIRE(tic_tac_toe->game_over() == false);
	tic_tac_toe->mark_board(2);
	REQUIRE(tic_tac_toe->game_over() == false);
	tic_tac_toe->mark_board(3);
	REQUIRE(tic_tac_toe->game_over() == false);
	tic_tac_toe->mark_board(4);
	REQUIRE(tic_tac_toe->game_over() == false);
	tic_tac_toe->mark_board(6);
	REQUIRE(tic_tac_toe->game_over() == false);
	tic_tac_toe->mark_board(5);
	REQUIRE(tic_tac_toe->game_over() == false);
	tic_tac_toe->mark_board(8);
	REQUIRE(tic_tac_toe->game_over() == false);
	tic_tac_toe->mark_board(7);
	REQUIRE(tic_tac_toe->game_over() == false);
	tic_tac_toe->mark_board(9);
	REQUIRE(tic_tac_toe->game_over() == false);
	tic_tac_toe->mark_board(10);
	REQUIRE(tic_tac_toe->game_over() == false);
	tic_tac_toe->mark_board(11);
	REQUIRE(tic_tac_toe->game_over() == false);
	tic_tac_toe->mark_board(12);
	REQUIRE(tic_tac_toe->game_over() == false);
	tic_tac_toe->mark_board(13);
	REQUIRE(tic_tac_toe->game_over() == false);
	tic_tac_toe->mark_board(14);
	REQUIRE(tic_tac_toe->game_over() == false);
	tic_tac_toe->mark_board(15);
	REQUIRE(tic_tac_toe->game_over() == false);
	tic_tac_toe->mark_board(16);
	REQUIRE(tic_tac_toe->game_over() == true);
	REQUIRE(tic_tac_toe->get_winner() == "t");
}

TEST_CASE("Test 4x4 player x")
{
	std::unique_ptr<TicTacToe> tic_tac_toe;
	tic_tac_toe = std::make_unique<TicTacToe4>();
	tic_tac_toe->start_game("x");

	REQUIRE(tic_tac_toe->get_player() == "x");
}

TEST_CASE("Test 4x4 player o")
{
	std::unique_ptr<TicTacToe> tic_tac_toe;
	tic_tac_toe = std::make_unique<TicTacToe4>();
	tic_tac_toe->start_game("o");

	REQUIRE(tic_tac_toe->get_player() == "o");
}

TEST_CASE("Test 4x4 first column win")
{
	std::unique_ptr<TicTacToe> tic_tac_toe;
	tic_tac_toe = std::make_unique<TicTacToe4>();
	tic_tac_toe->start_game("x");

	tic_tac_toe->mark_board(1);
	REQUIRE(tic_tac_toe->game_over() == false);

	tic_tac_toe->mark_board(2);
	REQUIRE(tic_tac_toe->game_over() == false);

	tic_tac_toe->mark_board(5);
	REQUIRE(tic_tac_toe->game_over() == false);

	tic_tac_toe->mark_board(6);
	REQUIRE(tic_tac_toe->game_over() == false);

	tic_tac_toe->mark_board(9);
	REQUIRE(tic_tac_toe->game_over() == false);
	
	tic_tac_toe->mark_board(10);
	REQUIRE(tic_tac_toe->game_over() == false);

	tic_tac_toe->mark_board(13);
	REQUIRE(tic_tac_toe->game_over() == true);
}

TEST_CASE("Test 4x4 second column win")
{
	std::unique_ptr<TicTacToe> tic_tac_toe;
	tic_tac_toe = std::make_unique<TicTacToe4>();
	tic_tac_toe->start_game("x");

	tic_tac_toe->mark_board(2);
	REQUIRE(tic_tac_toe->game_over() == false);
	
	tic_tac_toe->mark_board(3);
	REQUIRE(tic_tac_toe->game_over() == false);
	
	tic_tac_toe->mark_board(6);
	REQUIRE(tic_tac_toe->game_over() == false);
	
	tic_tac_toe->mark_board(4);
	REQUIRE(tic_tac_toe->game_over() == false);
	
	tic_tac_toe->mark_board(10);
	REQUIRE(tic_tac_toe->game_over() == false);
	
	tic_tac_toe->mark_board(7);
	REQUIRE(tic_tac_toe->game_over() == false);

	tic_tac_toe->mark_board(14);
	REQUIRE(tic_tac_toe->game_over() == true);
}

TEST_CASE("Test 4x4 third column win")
{
	std::unique_ptr<TicTacToe> tic_tac_toe;
	tic_tac_toe = std::make_unique<TicTacToe4>();
	tic_tac_toe->start_game("x");

	tic_tac_toe->mark_board(3);
	REQUIRE(tic_tac_toe->game_over() == false);
	
	tic_tac_toe->mark_board(2);
	REQUIRE(tic_tac_toe->game_over() == false);
	
	tic_tac_toe->mark_board(7);
	REQUIRE(tic_tac_toe->game_over() == false);
	
	tic_tac_toe->mark_board(4);
	REQUIRE(tic_tac_toe->game_over() == false);
	
	tic_tac_toe->mark_board(11);
	REQUIRE(tic_tac_toe->game_over() == false);
	
	tic_tac_toe->mark_board(5);
	REQUIRE(tic_tac_toe->game_over() == false);
	
	tic_tac_toe->mark_board(15);
	REQUIRE(tic_tac_toe->game_over() == true);
}

TEST_CASE("Test 4x4 fourth column win")
{
	std::unique_ptr<TicTacToe> tic_tac_toe;
	tic_tac_toe = std::make_unique<TicTacToe4>();
	tic_tac_toe->start_game("x");

	tic_tac_toe->mark_board(4);
	REQUIRE(tic_tac_toe->game_over() == false);
	
	tic_tac_toe->mark_board(2);
	REQUIRE(tic_tac_toe->game_over() == false);
	
	tic_tac_toe->mark_board(8);
	REQUIRE(tic_tac_toe->game_over() == false);
	
	tic_tac_toe->mark_board(6);
	REQUIRE(tic_tac_toe->game_over() == false);
	
	tic_tac_toe->mark_board(12);
	REQUIRE(tic_tac_toe->game_over() == false);
	
	tic_tac_toe->mark_board(5);
	REQUIRE(tic_tac_toe->game_over() == false);
	
	tic_tac_toe->mark_board(16);
	REQUIRE(tic_tac_toe->game_over() == true);
}

TEST_CASE("Test 4x4 first row win")
{
	std::unique_ptr<TicTacToe> tic_tac_toe;
	tic_tac_toe = std::make_unique<TicTacToe4>();
	tic_tac_toe->start_game("x");

	tic_tac_toe->mark_board(1);
	REQUIRE(tic_tac_toe->game_over() == false);
	
	tic_tac_toe->mark_board(7);
	REQUIRE(tic_tac_toe->game_over() == false);
	
	tic_tac_toe->mark_board(2);
	REQUIRE(tic_tac_toe->game_over() == false);
	
	tic_tac_toe->mark_board(6);
	REQUIRE(tic_tac_toe->game_over() == false);
	
	tic_tac_toe->mark_board(3);
	REQUIRE(tic_tac_toe->game_over() == false);
	
	tic_tac_toe->mark_board(5);
	REQUIRE(tic_tac_toe->game_over() == false);
	
	tic_tac_toe->mark_board(4);
	REQUIRE(tic_tac_toe->game_over() == true);
}

TEST_CASE("Test 4x4 second row win")
{
	std::unique_ptr<TicTacToe> tic_tac_toe;
	tic_tac_toe = std::make_unique<TicTacToe4>();
	tic_tac_toe->start_game("x");

	tic_tac_toe->mark_board(5);
	REQUIRE(tic_tac_toe->game_over() == false);
	
	tic_tac_toe->mark_board(2);
	REQUIRE(tic_tac_toe->game_over() == false);
	
	tic_tac_toe->mark_board(6);
	REQUIRE(tic_tac_toe->game_over() == false);
	
	tic_tac_toe->mark_board(3);
	REQUIRE(tic_tac_toe->game_over() == false);
	
	tic_tac_toe->mark_board(7);
	REQUIRE(tic_tac_toe->game_over() == false);
	
	tic_tac_toe->mark_board(4);
	REQUIRE(tic_tac_toe->game_over() == false);
	
	tic_tac_toe->mark_board(8);
	REQUIRE(tic_tac_toe->game_over() == true);
}

TEST_CASE("Test 4x4 third row win")
{
	std::unique_ptr<TicTacToe> tic_tac_toe;
	tic_tac_toe = std::make_unique<TicTacToe4>();
	tic_tac_toe->start_game("x");

	tic_tac_toe->mark_board(9);
	REQUIRE(tic_tac_toe->game_over() == false);
	
	tic_tac_toe->mark_board(2);
	REQUIRE(tic_tac_toe->game_over() == false);
	
	tic_tac_toe->mark_board(10);
	REQUIRE(tic_tac_toe->game_over() == false);
	
	tic_tac_toe->mark_board(3);
	REQUIRE(tic_tac_toe->game_over() == false);
	
	tic_tac_toe->mark_board(11);
	REQUIRE(tic_tac_toe->game_over() == false);
	
	tic_tac_toe->mark_board(4);
	REQUIRE(tic_tac_toe->game_over() == false);
	
	tic_tac_toe->mark_board(12);
	REQUIRE(tic_tac_toe->game_over() == true);
}
TEST_CASE("Test 4x4 fourth row win")
{
	std::unique_ptr<TicTacToe> tic_tac_toe;
	tic_tac_toe = std::make_unique<TicTacToe4>();
	tic_tac_toe->start_game("x");

	tic_tac_toe->mark_board(13);
	REQUIRE(tic_tac_toe->game_over() == false);
	
	tic_tac_toe->mark_board(2);
	REQUIRE(tic_tac_toe->game_over() == false);
	
	tic_tac_toe->mark_board(14);
	REQUIRE(tic_tac_toe->game_over() == false);
	
	tic_tac_toe->mark_board(3);
	REQUIRE(tic_tac_toe->game_over() == false);
	
	tic_tac_toe->mark_board(15);
	REQUIRE(tic_tac_toe->game_over() == false);
	
	tic_tac_toe->mark_board(4);
	REQUIRE(tic_tac_toe->game_over() == false);
	
	tic_tac_toe->mark_board(16);
	REQUIRE(tic_tac_toe->game_over() == true);
}

TEST_CASE("Test 4x4 first diagonal win")
{
	std::unique_ptr<TicTacToe> tic_tac_toe;
	tic_tac_toe = std::make_unique<TicTacToe4>();
	tic_tac_toe->start_game("x");

	tic_tac_toe->mark_board(1);
	REQUIRE(tic_tac_toe->game_over() == false);
	
	tic_tac_toe->mark_board(2);
	REQUIRE(tic_tac_toe->game_over() == false);
	
	tic_tac_toe->mark_board(6);
	REQUIRE(tic_tac_toe->game_over() == false);
	
	tic_tac_toe->mark_board(3);
	REQUIRE(tic_tac_toe->game_over() == false);
	
	tic_tac_toe->mark_board(11);
	REQUIRE(tic_tac_toe->game_over() == false);
	
	tic_tac_toe->mark_board(4);
	REQUIRE(tic_tac_toe->game_over() == false);
	
	tic_tac_toe->mark_board(16);
	REQUIRE(tic_tac_toe->game_over() == true);
}

TEST_CASE("Test 4x4 second diagonal win")
{
	std::unique_ptr<TicTacToe> tic_tac_toe;
	tic_tac_toe = std::make_unique<TicTacToe4>();
	tic_tac_toe->start_game("x");

	tic_tac_toe->mark_board(4);
	REQUIRE(tic_tac_toe->game_over() == false);
	
	tic_tac_toe->mark_board(2);
	REQUIRE(tic_tac_toe->game_over() == false);
	
	tic_tac_toe->mark_board(7);
	REQUIRE(tic_tac_toe->game_over() == false);
	
	tic_tac_toe->mark_board(8);
	REQUIRE(tic_tac_toe->game_over() == false);
	
	tic_tac_toe->mark_board(10);
	REQUIRE(tic_tac_toe->game_over() == false);
	
	tic_tac_toe->mark_board(5);
	REQUIRE(tic_tac_toe->game_over() == false);
	
	tic_tac_toe->mark_board(13);
	REQUIRE(tic_tac_toe->game_over() == true);
}

TEST_CASE("Test 4x4 x if winner")
{
	std::unique_ptr<TicTacToe> tic_tac_toe;
	tic_tac_toe = std::make_unique<TicTacToe4>();
	TicTacToeManager manager;
	tic_tac_toe->start_game("x");

	tic_tac_toe->mark_board(1);
	REQUIRE(tic_tac_toe->game_over() == false);
	
	tic_tac_toe->mark_board(5);
	REQUIRE(tic_tac_toe->game_over() == false);
	
	tic_tac_toe->mark_board(2);
	REQUIRE(tic_tac_toe->game_over() == false);
	
	tic_tac_toe->mark_board(6);
	REQUIRE(tic_tac_toe->game_over() == false);
	
	tic_tac_toe->mark_board(3);
	REQUIRE(tic_tac_toe->game_over() == false);
	
	tic_tac_toe->mark_board(7);
	REQUIRE(tic_tac_toe->game_over() == false);
	
	tic_tac_toe->mark_board(4);
	REQUIRE(tic_tac_toe->game_over() == true);

	REQUIRE(tic_tac_toe->get_winner() == "x");
}

TEST_CASE("Test 4x4 o if winner")
{
	std::unique_ptr<TicTacToe> tic_tac_toe;
	tic_tac_toe = std::make_unique<TicTacToe4>();
	TicTacToeManager manager;
	tic_tac_toe->start_game("o");

	tic_tac_toe->mark_board(1);
	REQUIRE(tic_tac_toe->game_over() == false);
	
	tic_tac_toe->mark_board(5);
	REQUIRE(tic_tac_toe->game_over() == false);
	
	tic_tac_toe->mark_board(2);
	REQUIRE(tic_tac_toe->game_over() == false);
	
	tic_tac_toe->mark_board(6);
	REQUIRE(tic_tac_toe->game_over() == false);
	
	tic_tac_toe->mark_board(3);
	REQUIRE(tic_tac_toe->game_over() == false);
	
	tic_tac_toe->mark_board(7);
	REQUIRE(tic_tac_toe->game_over() == false);
	
	tic_tac_toe->mark_board(4);
	REQUIRE(tic_tac_toe->game_over() == true);

	REQUIRE(tic_tac_toe->get_winner() == "o");
}

TEST_CASE("Test if x winner")
{
	std::unique_ptr<TicTacToe> tic_tac_toe;
	tic_tac_toe = std::make_unique<TicTacToe3>();
	TicTacToeManager manager;
	tic_tac_toe->start_game("x");

	tic_tac_toe->mark_board(3);
	REQUIRE(tic_tac_toe->game_over() == false);
	
	tic_tac_toe->mark_board(2);
	REQUIRE(tic_tac_toe->game_over() == false);
	
	tic_tac_toe->mark_board(5);
	REQUIRE(tic_tac_toe->game_over() == false);
	
	tic_tac_toe->mark_board(4);
	REQUIRE(tic_tac_toe->game_over() == false);
	
	tic_tac_toe->mark_board(7);
	REQUIRE(tic_tac_toe->game_over() == true);

	REQUIRE(tic_tac_toe->get_winner() == "x");
}

TEST_CASE("Test if o winner")
{
	std::unique_ptr<TicTacToe> tic_tac_toe;
	tic_tac_toe = std::make_unique<TicTacToe3>();
	TicTacToeManager manager;
	tic_tac_toe->start_game("o");

	tic_tac_toe->mark_board(3);
	REQUIRE(tic_tac_toe->game_over() == false);
	
	tic_tac_toe->mark_board(2);
	REQUIRE(tic_tac_toe->game_over() == false);
	
	tic_tac_toe->mark_board(5);
	REQUIRE(tic_tac_toe->game_over() == false);
	
	tic_tac_toe->mark_board(4);
	REQUIRE(tic_tac_toe->game_over() == false);
	
	tic_tac_toe->mark_board(7);
	REQUIRE(tic_tac_toe->game_over() == true);

	REQUIRE(tic_tac_toe->get_winner() == "o");
}