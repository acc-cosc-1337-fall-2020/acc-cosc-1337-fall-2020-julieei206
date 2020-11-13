#include <iostream>
#include <string>
#include <utility>
#include "tic_tac_toe.h"
#include "tic_tac_toe_manager.h"
#include "tic_tac_toe_3.h"
#include "tic_tac_toe_4.h"

using std::cin; using std::cout;

int main()
{
    int position;
    char playAgain;
	std::string player;
	TicTacToe game;
	TicTacToeManager manager;
  std::unique_ptr <TicTacToe> game=nullptr;
	
	do{
	    cout << "Pick 'X' or 'O': ";
	    cin >> player;
	    
	    while (player != "X" && player !="O")
	    {
	        cout << "Invalid entry! Enter 'X' or 'O': ";
	        cin >> player;	
	        
	    }
	    
      cout << "Pick game 3 or 4: ";
      cin >> gametype;

      while (gametype!=3 && gametype!=4)
      {
        cout << "Invalid entry! Enter '3' or '4': ";
        cin >> gametype;
      }

      if (gametype==3)
      {
        game=std::make_unique<TicTacToe3>();

      }

      else if (gametype==4)
      {
        game=std::make_unique<TicTacToe4>();
      }

	    game->get_player();
	    game->start_game(player);
	    
	    
	    do
	    {
	        
	        cin >> *game;
	        cout << *game;
	        
	        if(game.game_over()==true)
	        {
	            cout << game->get_winner() << " WINS!\n";
	            
	        }
	        
	    }
	    
	    while (game.game_over()==false);
	    
	    cout << "Game over!";
	    cout << "Play again? (y/n): ";
	    cin >> playAgain;       
	    cout << "\n";
	    
	    int x;
        int o;
        int t;
        
        manager.save_game(game);
        manager.get_winner_total(x,o,t);
	    
	}
	
	while (playAgain == 'y' || 'Y');	
	cout << manager;
	return 0;
}