#include<iostream>
#include<vector>
#include<string>
#include<memory>

using std::vector; using std::string;

#ifndef TicTacToe_h
#define TicTacToe_h

class TicTacToe
{
public:
    TicTacToe(int sum) : pegs(sum*sum," "){}
    bool game_over();
    void start_game(std::string first_player);
    void mark_board(int position);
    std::string get_player()const{return player;};
    void display_board()const;
    string get_winner()const{return winner;};

    friend std::istream& operator >> (std::istream&, TicTacToe& game);
    friend std::ostream& operator << (std::ostream&, const TicTacToe& game);

protected:
vector <string> pegs;
virtual bool check_column_win();
virtual bool check_row_win();
virtual bool check_diagonal_win

private:
    bool check_board_full()const;
    void set_next_player();
    std::string player;
    std::vector<std::string> pegs{9, " "};
    std::string winner;
    void clear_board();
    void set_winner();
};
#endif
