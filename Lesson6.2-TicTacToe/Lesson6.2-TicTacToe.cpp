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
	int gridSpaceSelection;
	bool turn = true;
	bool bActivePlayerIsPlayerOne = true; //player 1 = true, player 2 false;
	int playerOneWins = 0;
	int playerTwoWins = 0;
	int gamesPlayed = 0;

	greet();

	while (gamesPlayed < 5) {
		//single game loop
		for (int i = 0; i < 8; i++) {
			bGameInProgress = true;

			while (bGameInProgress) {
				//draw the board
				drawBoard();

				//check for a valid choice
				setPosition(bActivePlayerIsPlayerOne);

				//check for a winner set gameinprogress to false if there is one.
				bGameInProgress = !(checkForWinner());

				//check for draw
				if (bGameInProgress = true) 
				{ 
					bGameInProgress = !checkForDraw(); 
				}

				//change the player
				bActivePlayerIsPlayerOne = !bActivePlayerIsPlayerOne;
			}
		}	

		std::cout << "Game Over, commencing game #" << gamesPlayed + 1;
		//end the game if it goes to 9 turns (draw??)
		gamesPlayed++;
		resetBoard();
	}

}