#include "tic_tac_toe.h"

#ifndef TicTacToe_3_h
#define TicTacToe_3_h

class TicTacToe3 : public TicTacToe
{
    public:
        TicTacToe3() : TicTacToe(3) {}

    private:
        bool check_column_win();
        bool check_row_win();
        bool check_diagnol_win();

};


#endif