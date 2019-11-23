/*********************************************************************
** Author:        Adam Wright
** Date:          3/12/2019
** Description:   The main file for testing a class called SBoard that
**                defines a
**                class that produces a 10 x 10 playing board and
**                places tokens on the board an finds when squares are
**                created on the board.
*********************************************************************/

#include "SBoard.hpp"
#include <iostream>
#include <string>
#include <fstream>

using std::cout;
using std::endl;
using std::string;
using std::fstream;
using std::ifstream;


int main()
{
	SBoard testBoard;
	
	// Test to make sure that the ammount of tokens stars at zero
	cout << "Number of tokens played before the game: " << testBoard.getNumTokens() << endl;

	// Open the file of coordinates which will also place them
	testBoard.readPlacementsFromFile("boardTest.txt");

	// Test the current number of completed squares with a token that won't complete one
	cout << "The number of squares this token completes: " << testBoard.placeToken(4, 8) << endl;

	// Test the number of squares with a token that won't complete one
	cout << "The number of squares this token completes: " << testBoard.placeToken(1, 1) << endl;

	// Test the number of squares with a token that will complete one
	cout << "The number of squares this token completes: " << testBoard.placeToken(9, 9) << endl;

	// Test the number of squares with a token that won't complete one
	cout << "The number of squares this token completes: " << testBoard.placeToken(5, 6) << endl;

	// Test the number of squares with a token that will complete one
	cout << "The number of squares this token completes: " << testBoard.placeToken(7, 8) << endl;

	// Draw the final board
	testBoard.drawBoard();

	// Print the number of tokens that were able to be placed in bounds without double placement
	cout << "Number of tokens played after the game: " << testBoard.getNumTokens() << endl;

	return 0;
}
