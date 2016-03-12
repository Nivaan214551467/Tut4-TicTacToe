#pragma once
class TicTacToe
{
private:
	char board[3][3];

public:
	TicTacToe();
	void reset();
	void move(int, int ,char);
	void print();
	int getRow(int);
	int getCol(int);
	bool over(char);
	bool draw();
	bool spaceFree(int,int);

	~TicTacToe();
};

