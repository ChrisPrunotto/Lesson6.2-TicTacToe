#include "TicTacToe_funcs.h"
#include <ctype.h>
#include <vector>

std::vector<char> gridSpaces = { '1', '2', '3', '4', '5', '6', '7', '8', '9' };
int g_selectedGridSpace;
bool bWinner = false;

void greet()
{
	std::cout << "\n-----------------------\nWelcome to Tic Tac Toe!\n-----------------------\n";
	std::cout << "Instructions: When it's your turn, enter the number of the space you'd like to place your marker on. \n3 in a row wins!\n\n";
}

void drawBoard() {
	std::cout << "\n";
	std::cout << gridSpaces[0] << " | " << gridSpaces[1] << " | " << gridSpaces[2];
	std::cout << "\n---------\n";
	std::cout << gridSpaces[3] << " | " << gridSpaces[4] << " | " << gridSpaces[5];
	std::cout << "\n---------\n";
	std::cout << gridSpaces[6] << " | " << gridSpaces[7] << " | " << gridSpaces[8];
	std::cout << "\n\n";
}

void setPosition(bool bActivePlayerIsPlayerOne) {
	std::string player;

	if (bActivePlayerIsPlayerOne) {
		player = "1";
	}
	else { player = "2"; }

	std::cout << "It is Player " << player << "'s Turn. Please select a space: ";

	while (!(std::cin >> g_selectedGridSpace) && !(g_selectedGridSpace < 1 || g_selectedGridSpace > 9)) {
		std::cout << "Invalid choice. Please select again.";
		std::cin.clear();
		std::cin.ignore();
	}
	std::cout << "\n";

	while (gridSpaces[g_selectedGridSpace - 1] == 'X' || gridSpaces[g_selectedGridSpace - 1] == 'O') {
		std::cout << "There's already something in that space!\n";
		std::cout << "Please enter another number: ";
		std::cin >> g_selectedGridSpace;
		std::cout << "\n";
	}

	if (bActivePlayerIsPlayerOne) {
		gridSpaces[g_selectedGridSpace - 1] = 'X';
	}
	else {
		gridSpaces[g_selectedGridSpace - 1] = 'O';
	}
}

bool checkForWinner() {
	// Eight winning combinations (top, bottom, hmiddle, left, right, vmiddle, diagltr, giadrtl)
	char WinnerToken;
	//rows
	if (gridSpaces[0] == gridSpaces[1] && gridSpaces[0] == gridSpaces[2])
	{
		WinnerToken = gridSpaces[0];
		bWinner = true;
	}
	if (gridSpaces[3] == gridSpaces[4] && gridSpaces[3] == gridSpaces[5])
	{
		WinnerToken = gridSpaces[3];
		bWinner = true;
	}
	if (gridSpaces[6] == gridSpaces[7] && gridSpaces[6] == gridSpaces[8])
	{
		WinnerToken = gridSpaces[6];
		bWinner = true;
	}
	//columns
	if (gridSpaces[0] == gridSpaces[3] && gridSpaces[0] == gridSpaces[6])
	{
		WinnerToken = gridSpaces[0];
		bWinner = true;
	}
	if (gridSpaces[1] == gridSpaces[4] && gridSpaces[1] == gridSpaces[7])
	{
		WinnerToken = gridSpaces[1];
		bWinner = true;
	}
	if (gridSpaces[2] == gridSpaces[5] && gridSpaces[2] == gridSpaces[8])
	{
		WinnerToken = gridSpaces[3];
		bWinner = true;
	}
	//diagonals
	if (gridSpaces[0] == gridSpaces[4] && gridSpaces[0] == gridSpaces[8])
	{
		WinnerToken = gridSpaces[0];
		bWinner = true;
	}
	if (gridSpaces[2] == gridSpaces[4] && gridSpaces[2] == gridSpaces[6])
	{
		WinnerToken = gridSpaces[2];
		bWinner = true;
	}

	if (bWinner) {
		std::cout << "\n" << WinnerToken << " wins!\n";
	}

	return bWinner;
}

bool checkForDraw() {
	if (gridSpaces[0] != '1' &&	gridSpaces[1] != '2' &&	gridSpaces[2] != '3' &&	gridSpaces[3] != '4' &&	gridSpaces[4] != '5' &&	gridSpaces[5] != '6' &&	gridSpaces[6] != '7' &&	gridSpaces[7] != '8' &&	gridSpaces[8] != '9' && !bWinner) 
	{
		std::cout << "\nIt's a draw!\n";
		return true;
	}
	else { return false; }
}

void resetBoard() {
	gridSpaces = { '1', '2', '3', '4', '5', '6', '7', '8', '9' };
}

bool testBoolFunc() {
	return true;
}