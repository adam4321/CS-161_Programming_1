/*********************************************************************
** Author:        Adam Wright
** Date:          3/12/2019
** Description:   A class called SBoard that defines a
**                class that produces a 10 x 10 playing board and
**                places tokens on the board an finds when squares are
**                created on the board by the current token.
*********************************************************************/

#include "SBoard.hpp"
#include <string>
#include <fstream>
#include <iostream>


/*********************************************************************
** Description:   Default constructor that initializes an empty board
**                with period characters and sets tokens to zero.
*********************************************************************/
SBoard::SBoard()
{
	// Nested for loop of periods to represent an empty board
	for (int i = 0; i < 10; i++) 
	{
		for (int j = 0; j < 10; j++)
		{
			board[i][j] = '.';
		}
	}

	// Initialize tokens to zero before the game starts
	int tokens = 0;
}

/*********************************************************************
** Description:   Function to draw the gameboard.
*********************************************************************/
void SBoard::drawBoard()
{
	/* Nested for loop to print the current board and add spaces between 
	the characters on the horizontal axis to display a symetrical square */
	for (int i = 0; i < 10; i++)
	{
		if (i != 0)
			std::cout << std::endl;
		for (int j = 0; j < 10; j++)
		{
			std::cout << board[i][j] << " ";
		}
	}
	std::cout << std::endl;
}

/*********************************************************************
** Description:   Function to open a file that includes coordinates
**                and to read in the coordinates and then close the 
**                file.
*********************************************************************/
void SBoard::readPlacementsFromFile(std::string fileName)
{
	std::ifstream infile;
	infile.open(fileName);

	// Variables to hold the incoming integer pairs
	int x;
	int y;

	// Stream in the pairs and use them to call the placeToken function
	while (infile >> x >> y)
	{
		placeToken(x, y);
	}

	// Close the file of coordinates
	infile.close();
}

/*********************************************************************
** Description:   Getter to return the number of tokens played.
*********************************************************************/
int SBoard::getNumTokens() {return tokens;}

/*********************************************************************
** Description:  Function to place the tokens by using the coordinates
**               from the file that is passed into the 
**               readPlacementsFromFile function.
*********************************************************************/
int SBoard::placeToken(int x, int y)
{
	// Variable to hold the number of squares already completed
	int completedSquares = 0;

	// Variable to hold the number of squares completed by this token
	int squaresTokenCompletes = 0;

	// Don't place a token if its not a blank space on the 10x10 board
	if (x < 0 || x > 9 || y < 0 || y > 9 || board[x][y] == 'x')
	{
		return -1;
	}

	// Place an x if its a blank space on the board and increment tokens
	else
	{
		// Find the number of squares completed already
		completedSquares = findSquares();

		board[x][y] = 'x';
		tokens++;

		// Find the number of squres completed after the token
		squaresTokenCompletes = findSquares();

		// Return the number of squares completed by this current token
		return squaresTokenCompletes - completedSquares;
	}
}

/*********************************************************************
** Description:   Function to handle the square checking. It is passed
**                to placeToken and returns the number of completed 
**                squares on the gameboard.
*********************************************************************/
int SBoard::findSquares()
{
	// Iterator to count the number of completed squares
	int squares = 0;

	// Nested for loop to iterate through the array and give 2 coordinates
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			// Work down from the 4 corners making a 10x10 down to a 2x2 box
			if (board[i][j] == 'x' && board[i+9][j] == 'x' && board[i][j+9] == 'x' && board[i+9][j+9] == 'x')
				squares++;
			if (board[i][j] == 'x' && board[i+8][j] == 'x' && board[i][j+8] == 'x' && board[i+8][j+8] == 'x')
				squares++;
			if (board[i][j] == 'x' && board[i+7][j] == 'x' && board[i][j+7] == 'x' && board[i+7][j+7] == 'x')
				squares++;
			if (board[i][j] == 'x' && board[i+6][j] == 'x' && board[i][j+6] == 'x' && board[i+6][j+6] == 'x')
				squares++;
			if (board[i][j] == 'x' && board[i+5][j] == 'x' && board[i][j+5] == 'x' && board[i+5][j+5] == 'x')
				squares++;
			if (board[i][j] == 'x' && board[i+4][j] == 'x' && board[i][j+4] == 'x' && board[i+4][j+4] == 'x')
				squares++;
			if (board[i][j] == 'x' && board[i+3][j] == 'x' && board[i][j+3] == 'x' && board[i+3][j+3] == 'x')
				squares++;
			if (board[i][j] == 'x' && board[i+2][j] == 'x' && board[i][j+2] == 'x' && board[i+2][j+2] == 'x')
				squares++;
			if (board[i][j] == 'x' && board[i+1][j] == 'x' && board[i][j+1] == 'x' && board[i+1][j+1] == 'x')
				squares++;
		}
	}

	return squares;
}
