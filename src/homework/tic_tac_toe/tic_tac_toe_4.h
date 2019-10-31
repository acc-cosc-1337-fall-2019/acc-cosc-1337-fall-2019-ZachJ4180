#ifndef TIC_TAC_TOE_4
#define TIC_TAC_TOE_4

#include "tic_tac_toe.h"
#include <string>
#include <vector>

class TicTacToe4 : public TicTacToe
{
public:

	TicTacToe4() : TicTacToe(4) {}	//initializes TicTacToe3 object as a TicTacToe with size 3


protected:

	bool check_column_win() override;

	bool check_row_win() override;		//virtual makes functions flexible between 3 and 4

	bool check_diagonal_win() override;


private:



};

#endif // !TIC_TAC_TOE_4