#include "TicTacToe_funcs.h"
#include <ctype.h>


void greet()
{
	std::cout << "\n-----------------------\nWelcome to Tic Tac Toe!\n-----------------------\n";
	std::cout << "Instructions: When it's your turn, enter the number of the space you'd like to place your marker on. \n3 in a row wins!\n\n";
}

void drawBoard(std::vector<char> gridSpaces) {
	std::cout << "\n";
	std::cout << gridSpaces[0] << " | " << gridSpaces[1] << " | " << gridSpaces[2];
	std::cout << "\n---------\n";
	std::cout << gridSpaces[3] << " | " << gridSpaces[4] << " | " << gridSpaces[5];
	std::cout << "\n---------\n";
	std::cout << gridSpaces[6] << " | " << gridSpaces[7] << " | " << gridSpaces[8];
	std::cout << "\n\n";
}

char gridSpaceReplaceAttempt(std::vector<char> gridSpaces, int gridSpaceSelection, bool bActivePlayerIsPlayerOne)
{
	// figure out what is currently in the space.
	// if what's in the space is an X or an O, it's already been claimed and you need to try again.
	bool bGuessed = false;
	char gridSpaceCurrent = gridSpaces[gridSpaceSelection - 1];
	while (!bGuessed) {
		if (gridSpaceCurrent == 'X' || gridSpaceCurrent == 'O') {
			std::cout << "This space is already taken.";
		}
		else {
			if (bActivePlayerIsPlayerOne) {
				bGuessed = true;
				return 'X';
			}
			else {
				bGuessed = true;
				return 'O';
			}
		}
		bGuessed = true;
	}

	return gridSpaceCurrent;
}


int playerPrompt(bool bActivePlayerIsPlayerOne)
{
	int spaceSelection;
	std::string playerID;

	if (bActivePlayerIsPlayerOne == true) {
		playerID = "1";
	}
	else {
		playerID = "2";
	}

	std::cout << "It is currently player " << playerID << "'s turn\n" << "What space would you like to choose?: ";
	std::cin >> spaceSelection;
	return spaceSelection;
}

void changePlayer(bool bActivePlayerIsPlayerOne) {
	bActivePlayerIsPlayerOne = !bActivePlayerIsPlayerOne;
}