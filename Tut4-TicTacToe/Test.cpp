#include "TicTacToe.h"
#include <iostream>

using namespace std;

int main()
{
	TicTacToe game;
	int sp;

	start:
	game.reset();
	game.print();
	do{
		do{
			cout << "Player 1. Choose a Space to place a X : ";
			cin >> sp;
		} while (!(game.spaceFree(game.getRow(sp), game.getCol(sp))));

		game.move(game.getRow(sp),game.getCol(sp), 'X');

		if (game.over('X'))
		{
			cout << endl << "***** Player 1 WINS!! *****" << endl << endl;
			break;
		}
		else if (game.draw())
		{
			cout << "Game drawn." << endl << endl;
			break;
		}

		do{
			cout << "Player 2. Choose a Space to place an O : ";
			cin >> sp;
		} while (!(game.spaceFree(game.getRow(sp), game.getCol(sp))));

		game.move(game.getRow(sp), game.getCol(sp), 'O');

		if (game.over('O'))
		{
			cout << endl << "***** Player 2 WINS!! *****" << endl<< endl;
			break;
		}
		else if (game.draw())
		{
			cout << endl << "Game drawn." << endl << endl;
			break;
		}

	} while (!(game.over('X')) || !(game.over('O')) || (game.draw()));
	
	char choice;
	cout << "Would you like to play again (Y/N) ? ";
	cin >> choice;
	if (choice == 'Y')
		goto start;
	else
		cout << "Thank you for playing." << endl;
}