#pragma once
#include <vector>
#include <iostream>
#include <string>

void greet();
void drawBoard(std::vector<char> gridSpaces);
char gridSpaceReplaceAttempt(std::vector<char> gridSpaces, int gridSpaceSelection, bool bActivePlayerIsPlayerOne);
int playerPrompt(bool bActivePlayerIsPlayerOne);
void changePlayer(bool bActivePlayerIsPlayerOne);