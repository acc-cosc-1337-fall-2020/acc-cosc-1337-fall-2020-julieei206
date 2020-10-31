#include<iostream>
#include<vector>
#include<string>
#include "tic_tac_toe.h"

using std::vector; using std::string;

bool TicTacToe::game_over()
{
    if(check_column_win() == true)
    {
        set_winner();
        return true;
    }
    else if(check_row_win() == true)
    {
        set_winner();
        return true;
    }
    else if(check_diagonal_win() == true)
    {
        set_winner();
        return true;
    }
    else if(check_board_full() == true)
    {
        winner = "C";
        return true;
    }
    return false;
}

void TicTacToe::set_winner()
{
    if(player == "X")
    {
        winner = "O";
    }
    else
    {
        winner = "X";
    }
}

void TicTacToe::start_game(string first_player)
{
    player = first_player;
    clear_board();
}

void TicTacToe::mark_board(int mark)
{
    pegs[mark-1] = player;
    set_next_player();
}

void TicTacToe::display_board()const
{
    for(std::size_t i=0; i < pegs.size(); i += 3)
    {
        std::cout<<pegs[i]<<"|"<<pegs[i+1]<<"|"<<pegs[i+2]<<"\n";
    }
}

void TicTacToe::set_next_player()
{
    if(player == "X")
    {
        player = "O";
    }
    else
    {
        player = "X";
    }
}

bool TicTacToe::check_board_full()const
{
    for(auto i: pegs)
    {
        if(i == " ")
        {
            return false;
        }    
    }
    
    return true;

}

void TicTacToe::clear_board()
{
    for(std::size_t i = 0; i < pegs.size(); ++i)
    {
        pegs[i] = " ";
    }
}

bool TicTacToe::check_column_win()
{
    for(std::size_t i = 0; i < pegs.size()/3; ++i)
    {
        if((pegs[i] == pegs[i + 3]) && (pegs[i] == pegs[i + 6]) && (pegs[i] != " "))
        {
            return true;
        }
    }
    return false;

}

bool TicTacToe::check_row_win()
{ 
    for(std::size_t i=0; i < pegs.size()/3; ++i)
    {
        if((pegs[ 3*i ] == pegs[ 3*i+1 ]) && (pegs[ 3*i ] == pegs[ 3*i+2 ] && (pegs[ 3*i ] != " ")))
        {
            return true;
        }
    }
    return false;
}

bool TicTacToe::check_diagonal_win()
{ 
    if((pegs[0] == pegs[4]) && (pegs[0] == pegs[8]) && (pegs[0] != " "))
    {
        return true;
    }

    else if((pegs[2] == pegs[4]) && (pegs[2] == pegs[6]) && (pegs[2] != " "))
    {
        return true;
    }
    return false;
}
