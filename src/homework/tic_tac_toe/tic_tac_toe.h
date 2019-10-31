#ifndef TIC_TAC_TOE_H
#define TIF_TAC_TOE_H

#include<string>
#include<vector>

using std::string; using std::vector;

#include<iostream>

using std::ostream; using std::istream;


/*
Represents one game of tic tac toe.
*/
class TicTacToe 
{
public:

	TicTacToe() {};										//blank constructor

	TicTacToe(int size) : pegs(size * size, " ") {};	//constructor + initializer


	bool game_over();


	void start_game(string player);

	void mark_board(int position);


	string get_player() const;

	string get_winner() const;


	friend ostream& operator<<(ostream& out, const TicTacToe& t);

	friend istream& operator>>(istream& in, TicTacToe& t);


protected:

	virtual bool check_column_win();

	virtual bool check_row_win();		//virtual makes functions flexible between 3 and 4

	virtual bool check_diagonal_win();


	vector<string> pegs{};	//initializer: | 9 for x3 | 16 for x4 |


private:

	void set_next_player();


	void clear_board();

	bool check_board_full();


	void set_winner();


	string next_player;

	string winner;
};

#endif