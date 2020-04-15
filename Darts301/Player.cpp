#include "Player.h"
#include <cstdlib>
#include <ctime>
#include <iostream>
using namespace std;

Player::Player()
{
	bullsHit = 0;
	gamesWon = 0;
	currScore = 301;
	targetNumber = 50;
	bullChance = 70;
	numChance = 80;
}

bool Player::tryBull()
{
	
	int rnghit = rand() % 100 + 1;
	if (rnghit <= bullChance)
	{
		return true;
	}
	else
	{
		return false;
	}
}

bool Player::tryNumber()
{
	int rnghit = rand() % 100 + 1;
	if (rnghit <= numChance)
	{
		return true;
	}
	else
	{
		return false;
	}
}

void Player::setTargetNum()
{
	if ((currScore >= 100) || (currScore == 50))
	{
		targetNumber = 50;
	}
	else if (currScore > 50)
	{
		targetNumber = currScore - 50;
	}
}

void Player::setName(string playerName)
{
	name = playerName;
}

void Player::setBullChance(int bullPrec)
{
	bullChance = bullPrec;
}

void Player::setNumChance(int numPrec)
{
	numChance = numPrec;
}

void Player::setCurrScore(int score)
{
	currScore = score;
}

void Player::incGamesWon()
{
	gamesWon++;
}

string Player::getName()
{
	return name;
}

int Player::getBullChance()
{
	return bullChance;
}

int Player::getNumChance()
{
	return numChance;
}

int Player::getCurrScore()
{
	return currScore;
}

int Player::getTargetNum()
{
	return targetNumber;
}

int Player::getGamesWon()
{
	return gamesWon;
}

void Player::throwOneDart()
{
	bool isHit = false;
	setTargetNum();
	if (targetNumber==50)
	{
		isHit = tryBull();
		if (isHit==true)
		{
			currScore -= 50;
			cout << "Bull hit!" << endl;
		}
		else
		{
			int hit = myBoard.missedBull();
			currScore -= hit;
			cout << "Bull missed! Number hit instead: " << hit << endl;
		}
	}
	else
	{
		isHit = tryNumber();
		if (isHit==true)
		{
			currScore -= targetNumber;
			cout << "Number hit!" << endl;
		}
		else
		{
			int hit = myBoard.missedNum(targetNumber);
			currScore -= hit;
			cout << "Number missed! Number hit instead: " << hit << endl;
		}
	}
}
