#include "tic_tac_toe_manager.h"

using std::cin; using std::cout;

void TicTacToeManager::update_winner_count(std::string winner)
{
    if (winner == "x")
    {
        x_win += 1;
    }
    else if(winner == "o")
    {
        o_win +=1;
    }
    else
    {
        tie += 1;
    }

}

void TicTacToeManager::get_winner_total(int& o, int& x, int& t)
{
    o = o_win;
    x = x_win;
    t = tie;

    cout<<"o win(s): "<< o << " x win(s): " << x << " tie(s): "<< t <<"\n";
}

ostream& operator<<(std::ostream& out, const TicTacToeManager &manager)
{

    for (auto &b: manager.games)
    {
        out << *b;
        out << "Game number: " << i+1 << "\nThe winner is: "<< get_winner();

    }  

    return out;
}

void TicTacToeManager::save_game(unique_ptr<TicTacToe>& b)
{
    update_winner_count(b->get_winner());
    games.push_back(std::move(b));
} 

TicTacToeManager::TicTacToeManager(TicTacToeData &data)
{
    games = data.get_games();
    for(auto &game_ptr : games)
    {
        update_winner_count(game_ptr->get_winner());
    }
}

TicTacToeManager::~TicTacToeManager(){data.save_games(games);}