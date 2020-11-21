#include "tic_tac_toe_4.h"

bool TicTacToe4::check_column_win() const
{
    for(std::size_t i=0; i < 4; ++i)
    {
        if(pegs[i] == "x" && pegs[i+4] == "x" && pegs[i+8] == "x" && pegs[i+12] == "x")
        {
            return true;
        }
        else if(pegs[i] == "o" && pegs[i+4] == "o" && pegs[i+8] == "o" && pegs[i+12] == "o")
        {
            return true;
        }
    }
    return false;
}

bool TicTacToe4::check_row_win() const
{
    for(std::size_t i=0; i < pegs.size(); i += 4)
    {
        if(pegs[i] == "x" && pegs[i+1] == "x" && pegs[i+2] == "x" && pegs[i+3] == "x")
        {
            return true;
        }
        else if(pegs[i] == "o" && pegs[i+1] == "o" && pegs[i+2] == "o" && pegs[i+3] == "o")
        {
            return true;
        }
    }
    return false;
}

bool TicTacToe4::check_diagonal_win() const
{
    if(pegs[0] == "x" && pegs[5] == "x" && pegs[10] == "x" && pegs[15] == "x")
    {
        return true;
    } 
    else if(pegs[3] == "x" && pegs[6] == "x" && pegs[9] == "x" && pegs[12] == "x")
    {
        return true;
    }
    else if(pegs[0] == "o" && pegs[5] == "o" && pegs[10] == "o" && pegs[15] == "o")
    {
        return true;
    }
    else if(pegs[3] == "o" && pegs[6] == "o" && pegs[9] == "o" && pegs[12] == "o")
    {
        return true;
    }
    return false;
}
