#include "tic_tac_toe_manager.h"
#include "tic_tac_toe_3.h"
#include "tic_tac_toe_4.h"
//#include"tic_tac_toe.h"	//not required because tic_tac_toe.h is included in the manager.h
#include<iostream>
#include<string>
//dont #include "main.h", makes an error with "game" class object

using std::cout; using std::cin; using std::string;

int main()
{
	char cont = 'y';


	unique_ptr<TicTacToeManager> manager = std::make_unique<TicTacToeManager>();

	string player;


	int game_type;

	
	do
	{
		cout << "Play win by 3 or win by 4: ";

		cin >> game_type;


		unique_ptr<TicTacToe> game;


		if (game_type == 3)
		{
			game = std::make_unique<TicTacToe3>();
		}
		else
		{
			game = std::make_unique<TicTacToe4>();
		}


		cout << "Enter X or O";

		cin >> player;


		game->start_game(player);	//references the start_game() function within TTT3 & TTT4


		while (game->game_over() == false)
		{
			cin	 >> *game;

			cout << *game;
		}

		manager->save_game(game);


		cout << "Game over: ";


		cout << "Play again y";

		cin >> cont;


	} while (cont == 'y' || cont == 'Y');

	cout << "History: \n";

	cout << *manager;


	return 0;
}
