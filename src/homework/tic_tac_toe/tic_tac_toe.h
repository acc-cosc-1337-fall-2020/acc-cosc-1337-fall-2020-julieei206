#include<iostream>
#include<vector>
#include<string>

using std::vector; using std::string;

#ifndef TicTacToe_h
#define TicTacToe_h

class TicTacToe
{
public:
    TicTacToe(){};
    TicTacToe(unsigned int size) : pegs(size*size," "){}
    TicTacToe(vector<string> p, string win) : pegs(p), winner(win){}

    bool game_over();
    void mark_board(int position);
    void start_game(std::string first_player);
    string get_player()const{return player;};
    string get_winner()const{return winner;};
    vector<string> get_pegs()const{return pegs;}

    friend std::ostream& operator << (std::ostream&, const TicTacToe& game);
    friend std::istream& operator >> (std::istream&, TicTacToe& game);

protected:
vector <string> pegs{};
virtual bool check_column_win() const = 0;
virtual bool check_row_win() const = 0;
virtual bool check_diagonal_win const = 0;

private:
    string player;
    string winner;
    
    void set_next_player();
    bool check_board_full()const;
    void clear_board();
    void set_winner();
};
#endif 