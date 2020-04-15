#pragma once
#include <string>
#include "Board.h"
using namespace std;

class Player
{
private:
	string name;
	int bullChance;
	int numChance;
	int gamesWon;
	int targetNumber;
	int currScore;
	int bullsHit;
	Board myBoard;

public:
	Player();
	bool tryBull();
	bool tryNumber();
	void setTargetNum();
	void setName(string playerName);
	void setBullChance(int bullPrec);
	void setNumChance(int numPrec);
	void setCurrScore(int score);
	void incGamesWon();
	string getName();
	int getBullChance();
	int getNumChance();
	int getCurrScore();
	int getTargetNum();
	int getGamesWon();
	void throwOneDart();
};

