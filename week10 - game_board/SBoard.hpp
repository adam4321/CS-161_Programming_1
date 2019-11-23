/*********************************************************************
** Author:        Adam Wright
** Date:          3/12/2019
** Description:   Header file for a class called SBoard that defines a 
**                class that produces a 10 x 10 playing board and 
**                places tokens on the board an finds when squares are
**                created on the board.
*********************************************************************/

#ifndef SBOARD_HPP
#define SBOARD_HPP
#include <string>
#include <fstream>
#include <iostream>


class SBoard
{
private:
	char board[10][10];
	int tokens;
	int findSquares();
public:
	SBoard();
    int getNumTokens();
    int placeToken(int, int);
    void readPlacementsFromFile(std::string);
    void drawBoard();
};
#endif