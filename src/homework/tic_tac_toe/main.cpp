#include<iostream>
#include<string>
#include "tic_tac_toe.h"

using std::cin; using std::cout;

int main()
{
    int mark;
    char playAgain;
	std::string player;
	TicTacToe game;
	
	do{
	    cout << "Pick 'X' or 'O': ";
	    cin >> player;
	    game.start_game(player);
	    
	    while (player != "X" && player !="O")
	    {
	        cout << "Invalid entry! Enter 'X' or 'O': ";
	        cin >> player;	
	        
	    }
	    
	    while (game.game_over() == false)
	    {
	        cout << "Choose your position (1-9): ";
	        cin >> mark;
	        game.mark_board(mark);
	        game.display_board();
	        game.get_player();
	        
	        while(mark<1 || mark>9)
	        {
	            cout << "Position must be between 1 & 9: ";
	            cin >> mark;
	            
	        }
	        
	        game.mark_board(mark);
	        game.display_board();
	        
	    }
	    
	    if(game.get_winner() == "C")
	    {
	        cout << "IT'S A TIE!";
	        game.display_board();
	        
	    }
	    
	    else
	    {
	        cout << game.get_winner() << " WINS!";
	        game.display_board();
	        
	    }
	    
	    cout << "Game over!";
	    cout << "Play again? (y/n): ";
	    cin >> playAgain; 
	    
	}
	
	while (playAgain == 'y' || 'Y');	
	return 0;
}
