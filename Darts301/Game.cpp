#include "Game.h"
#include <iostream>
using namespace std;

Game::Game()
{
	isGameOver = false;
}

void Game::winner()
{
	cout << "The winner is " << lastWinner << "!" << endl;
}

void Game::playerRound(Player* currPlayer)
{
	for (int i = 0; i < 3; i++)
	{
		currPlayer->throwOneDart();
		if (currPlayer->getCurrScore()==0)
		{
			isGameOver = true;
			lastWinner = currPlayer->getName();
			currPlayer->incGamesWon();
			winner();
			break;
		}
		else if (currPlayer->getCurrScore()<50)
		{
			currPlayer->setCurrScore(currPlayer->getCurrScore() + currPlayer->getTargetNum());
		}
		cout << "New score of player " << currPlayer->getName() << " is: " << currPlayer->getCurrScore() << endl;
	}
}

void Game::setLastWinner(string playername)
{
	lastWinner = playername;
}

string Game::getLastWinner()
{
	return lastWinner;
}

void Game::setGameOver(bool state)
{
	isGameOver = state;
}

bool Game::getGameOver()
{
	return isGameOver;
}
