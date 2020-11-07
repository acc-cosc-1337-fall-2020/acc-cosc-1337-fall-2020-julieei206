#include <vector>
#include <iostream>
#include "tic_tac_toe.h"
#ifndef tic_tac_toe_manager_h
#define tic_tac_toe_manager_h

using std::vector; using std::ostream;

class TicTacToeManager
{
private:
    vector<TicTacToe> games;
    int o_win = {0};
    int x_win = {0};
    int tie = {0};
    void update_winner_count(string);

public:
    void save_game(const TicTacToe b);
    void get_winner_total(int&, int&, int&);
    friend ostream& operator << (std::ostream&, const TicTacToeManager&);
    
    
};

#endif