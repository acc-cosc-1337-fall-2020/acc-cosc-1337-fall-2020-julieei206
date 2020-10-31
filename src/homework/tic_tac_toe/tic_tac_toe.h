#include<iostream>
#include<vector>
#include<string>

using std::vector; using std::string;

#ifndef TicTacToe_h
#define TicTacToe_h

class TicTacToe
{
public:
    bool game_over();
    void start_game(std::string first_player);
    void mark_board(int mark);
    std::string get_player()const{return player;};
    void display_board()const;
    string get_winner(){return winner;}

private:
    bool check_board_full()const;
    void set_next_player();
    std::string player;
    std::vector<std::string> pegs{9, " "};
    std::string winner;
    void clear_board();
    bool check_column_win();
    bool check_row_win();
    bool check_diagonal_win();
    void set_winner();
};
#endif
