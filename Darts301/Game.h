#pragma once
#include "Player.h"

class Game
{
private:
	string lastWinner;
	bool isGameOver;

public:
	Game();
	void winner();
	void playerRound(Player* currPlayer);
	void setLastWinner(string playername);
	string getLastWinner();
	void setGameOver(bool state);
	bool getGameOver();
};

