#include "TicTacToe.h"
#include <iostream>

using namespace std;


TicTacToe::TicTacToe()
{
	board[0][0] = '1';
	board[0][1] = '2';
	board[0][2] = '3';
	board[1][0] = '4';
	board[1][1] = '5';
	board[1][2] = '6';
	board[2][0] = '7';
	board[2][1] = '8';
	board[2][2] = '9';
}

void TicTacToe::print()
{
	int j;
	cout << "--------------------" << endl;
	for (j = 0; j < 3; j++)
	{
		cout << "	" << board[j][0] << "|" << board[j][1] << "|" << board[j][2] << endl;
	}
	cout << "--------------------" << endl << endl;

}

void TicTacToe::reset()
{
	board[0][0] = '1';
	board[0][1] = '2';
	board[0][2] = '3';
	board[1][0] = '4';
	board[1][1] = '5';
	board[1][2] = '6';
	board[2][0] = '7';
	board[2][1] = '8';
	board[2][2] = '9';
}

bool TicTacToe::spaceFree(int row, int col)
{
	if (board[row][col] == 'X' || board[row][col] == 'O')
		return false;
	else
		return true;
}

int TicTacToe::getRow(int x)
{
	if (x == 1 || x == 2 || x == 3)
		return 0;
	if (x == 4 || x == 5 || x == 6)
		return 1;
	else 
		return 2;
}

int TicTacToe::getCol(int x)
{
	if (x == 1 || x == 4 || x == 7)
		return 0;
	if (x == 2 || x == 5 || x == 8)
		return 1;
	else
		return 2;
}

void TicTacToe::move(int row,int col,char play)
{
		board[row][col] = play;
		print();
}

bool TicTacToe::over(char res)
{
	if (board[0][0] == res && board[0][1] == res && board[0][2] == res)
		return true;
	else if (board[1][0] == res && board[1][1] == res && board[1][2] == res)
		return true;
	else if (board[2][0] == res && board[2][1] == res && board[2][2] == res)
		return true;
	else if (board[0][0] == res && board[1][0] == res && board[2][0] == res)
		return true;
	else if (board[0][1] == res && board[1][1] == res && board[2][1] == res)
		return true;
	else if (board[0][2] == res && board[1][2] == res && board[2][2] == res)
		return true;
	else if (board[0][0] == res && board[1][1] == res && board[2][2] == res)
		return true;
	else if (board[0][2] == res && board[1][1] == res && board[2][0] == res)
		return true;
	else
		return false;
}

bool TicTacToe::draw()
{
	bool flag = true;
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			if (board[i][j] != 'X' && board[i][j] != 'O')
				flag = false;
		}
	}

	return flag;
}

TicTacToe::~TicTacToe()
{
}
