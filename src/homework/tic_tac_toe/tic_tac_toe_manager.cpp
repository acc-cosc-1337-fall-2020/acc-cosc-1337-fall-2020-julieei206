#include "tic_tac_toe_manager.h"

using std::cin; using std::cout;

void TicTacToeManager::update_winner_count(std::string winner)
{
    if (winner == "X")
    {
        x_win += 1;
    }
    else if(winner == "O")
    {
        o_win +=1;
    }
    else
    {
        tie += 1;
    }

}

void TicTacToeManager::get_winner_total(int& o, int& x, int& c)
{
    o = o_win;
    x = x_win;
    c = tie;

    cout<<"o win(s): "<< o << " x win(s): " << x << " tie(s): "<< c <<"\n";
}

ostream& operator<<(std::ostream& out, const TicTacToeManager& manager)
{

    for (size_t i = 0; i < manager.games.size(); i++)
    {
        out << manager.games[i];
        out << "Game number: " << i+1 << "\nThe winner is: "<< manager.games[i].get_winner();

    }  

    return out;
}

void TicTacToeManager::save_game(unique_ptr<TicTacToe>& b)
{
    update_winner_count(b->get_winner());
    games.push_back(std::move(b));
    update_winner_count(b.get_winner());
} 