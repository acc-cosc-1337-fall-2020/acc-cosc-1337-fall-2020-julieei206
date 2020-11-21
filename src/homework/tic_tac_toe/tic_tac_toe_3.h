#include "tic_tac_toe.h"

#ifndef TicTacToe_3_h
#define TicTacToe_3_h

class TicTacToe3 : public TicTacToe
{
    public:
        TicTacToe3() : TicTacToe(3) {}
        TicTacToe3(std::vector<string> p, string winner) : TicTacToe(p, winner){}

    private:
        bool check_column_win() const override;
        bool check_row_win() const override;
        bool check_diagnol_win() const override;

};


#endif