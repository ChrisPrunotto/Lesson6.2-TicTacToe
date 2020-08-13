// Lesson6.2-TicTacToe.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "TicTacToe_funcs.h"
#include <vector>
#include "Lesson6.2-TicTacToe.h"

//A game of tic tac toe.
// 2 players, inputting into the same terminal.
// 3x3 board game, represented by a data structure like a vector, or an array.
// Eight winning combinations (top, bottom, hmiddle, left, right, vmiddle, diagltr, giadrtl)
//
// Challenges:
// -- Make the game best of 3 or best of 5
// -- Be able to play against the computer (random numbers picked?)
// ---

int main()
{
	bool bGameInProgress = true;
	std::vector<char> gridSpaces = { '1', 'X', 'O', '4', '5', '6', '7', '8', '9' }; // positions 1 and 2 are pre-populated with X and O as an example.
	int gridSpaceSelection;
	bool turn = true;
	bool bActivePlayerIsPlayerOne = true; //player 1 = true, player 2 false;
	int playerOneWins = 0;
	int playerTwoWins = 0;
	int gamesPlayed = 0;

	greet();

	while (bGameInProgress == true && gamesPlayed < 5) {
		//single game loop
		for (int i = 0; i < 9; i++) {
			drawBoard(gridSpaces);
			gridSpaceSelection = playerPrompt(bActivePlayerIsPlayerOne);

			//Update the Board
			gridSpaces[gridSpaceSelection - 1] = gridSpaceReplaceAttempt(gridSpaces, gridSpaceSelection, bActivePlayerIsPlayerOne);

			//check if the game is won
			
			//change player
		}	
		//end the game if it goes to 9 turns (draw??)
		gamesPlayed++;
		
	}

}