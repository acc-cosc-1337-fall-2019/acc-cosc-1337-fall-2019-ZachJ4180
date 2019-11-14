//h

#ifndef TIC_TAC_TOE_MANAGER_H
#define TIC_TAC_TOE_MANAGER_H

#include <memory>
#include <vector>
#include "tic_tac_toe.h"
#include "tic_tac_toe_3.h"
#include "tic_tac_toe_4.h"

using std::vector;
using std::unique_ptr;
using std::make_unique;

class TicTacToeManager
{
public:

	void save_game(unique_ptr<TicTacToe>& game);

	const std::vector<std::unique_ptr<TicTacToe>> & get_games();

	void get_winner_totals(int& x, int& o, int& c);

	unique_ptr<TicTacToe> get_game(int game_type);	//ienumeration

	friend ostream & operator << (ostream & out, TicTacToeManager & m);


private:

	void update_winner_count(string winner);


	vector<unique_ptr<TicTacToe>> games;


	int x_win{ 0 };

	int o_win{ 0 };

	int ties{ 0 };
};

#endif