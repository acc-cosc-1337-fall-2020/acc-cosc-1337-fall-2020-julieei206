#include <vector>
#include <iostream>
#include "tic_tac_toe.h"
#ifndef tic_tac_toe_manager_h
#define tic_tac_toe_manager_h

using std::vector; using std::ostream;
using std::unique_ptr;

class TicTacToeManager
{
private:
    vector<unique_ptr<TicTacToe>> games;
    int o_win = {0};
    int x_win = {0};
    int tie = {0};
    void update_winner_count(string);

public:
    void update_winner_count(std::string);
    void save_game(unique_ptr<TicTacToe>& b);
    void get_winner_total(int& o, int& x, int& t);
    friend ostream& operator << (std::ostream& out, const TicTacToeManager& manager);
    
    
};

#endif