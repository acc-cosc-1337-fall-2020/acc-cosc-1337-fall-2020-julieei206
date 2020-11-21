#include <iostream>
#include <memory>
#include <utility>
#include "tic_tac_toe.h"
#include "tic_tac_toe_manager.h"
#include "tic_tac_toe_3.h"
#include "tic_tac_toe_4.h"
#include "tic_tac_toe_data.h"

using std::cin; using std::cout;

int main() 
{
	unique_ptr<TicTacToe> game;
	TicTacToeData data;
	TicTacToeManager manager(data);
	int size = 0;
	string player;

	char playAgain;
	do
	{
		cout << "Pick 'x' or 'o': ";
		cin >> player;
		
		while ((player!="x") && (player!="o"))
		{
			cout << "Invalid entry! Enter 'x' or 'o': ";
			cin >> player;
		}

		while (size == 0)
		{
			cout << "Enter 3 (for 3x3 board) or 4 (for 4x4 board): ";
			cin >> size;
		
			if (size == 3)
			{
				game = make_unique<TicTacToe3>();
				cout << *game;
			}	
			else if (size == 4)
			{
				game = make_unique<TicTacToe4>();
				cout << *game;
			}
			else
			{
				cout<<"Invalid entry!";
			}
		}

		game->start_game(player);
		cout << "\n";

		do	
		{
			cin >> *game;
			cout << *game;

			if (game->game_over() == false)
			{
				cout << game->get_winner() << " WINS!\n";
			}

		} while (game->game_over() == false);

		cout<<"Game over!"<<"\n";
		int o;
		int x;
		int t;

		size = 0;
		manager.save_game(game);
		manager.get_winner_total(o, x, t);

		cout << "Play again? (y/n): ";
		cin >> playAgain;
    cout << "\n";

	} while (playAgain == 'y' || 'Y');

	cout<<manager<<"\n";
	
	return 0;
}