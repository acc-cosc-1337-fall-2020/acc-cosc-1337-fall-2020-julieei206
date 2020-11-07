#include<iostream>
#include<string>
#include "tic_tac_toe.h"
#include "tic_tac_toe_manager.h"

using std::cin; using std::cout;

int main()
{
    int mark;
    char playAgain;
	std::string player;
	TicTacToe game;
	TicTacToeManager manager;
	
	do{
	    cout << "Pick 'X' or 'O': ";
	    cin >> player;
	    
	    while (player != "X" && player !="O")
	    {
	        cout << "Invalid entry! Enter 'X' or 'O': ";
	        cin >> player;	
	        
	    }
	    
	    game.get_player();
	    game.start_game(player);
	    
	    
	    do
	    {
	        
	        cin >> game;
	        cout << game;
	        
	        if(game.game_over()==true)
	        {
	            cout << game.get_winner() << " WINS!\n";
	            
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