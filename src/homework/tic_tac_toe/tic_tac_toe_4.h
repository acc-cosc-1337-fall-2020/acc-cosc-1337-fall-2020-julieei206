#include "tic_tac_toe.h"

#ifndef TicTacToe_4_h
#define TicTacToe_4_h


class TicTacToe4 : public TicTacToe
{
    public:
        TicTacToe4() : TicTacToe(4) {}
        TicTacToe4(std::vector<std::string> p, std::string winner) : TicTacToe(p, winner){}

    private:
        bool check_column_win() const override;
        bool check_row_win() const override;
        bool check_diagnol_win() const override;
};

#endif