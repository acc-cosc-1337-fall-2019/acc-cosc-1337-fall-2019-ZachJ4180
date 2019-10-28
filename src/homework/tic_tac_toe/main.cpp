#include "tic_tac_toe_manager.h"
//#include"tic_tac_toe.h"		//not required because tic_tac_toe.h is included in the manager.h
#include<iostream>
#include<string>
//dont #include "main.h", makes an error with "game" class object

using std::cout; using std::cin; using std::string;

int main()
{
	char cont = 'y';


	TicTacToeManager manager;

	string player;

	do
	{
		TicTacToe game;


		cout << "Enter X or O";

		cin >> player;


		game.start_game(player);


		while (game.game_over() == false)
		{
			cin >> game;

			cout << game;
		}

		manager.save_game(game);


		cout << "Game over: ";


		cout << "Play again y";

		cin >> cont;


	} while (cont == 'y' || cont == 'Y');


	return 0;
}
