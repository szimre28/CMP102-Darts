#include "Game.h"
#include "Player.h"
#include <iostream>
#include <string>
using namespace std;
#include <ctime>
#include <cstdlib>

int main()
{
	srand(0);
	Player p1;
	Player p2;
	Game mygame;
	string names = "";
	int chances = 0;

	cout << "Welcome to darts!" << endl;
	cout << "Please enter name of Player 1: ";
	cin >> names;
	p1.setName(names);
	cout << endl;
	cout << "Please enter name of Player 2: ";
	cin >> names;
	p2.setName(names);
	cout << endl;
	cout << "Please enter bull hitchance for Player1: ";
	cin >> chances;
	p1.setBullChance(chances);
	cout << endl;
	cout << "Please enter number hitchance for Player1: ";
	cin >> chances;
	p1.setNumChance(chances);
	cout << endl;
	cout << "Please enter bull hitchance for Player2: ";
	cin >> chances;
	p1.setBullChance(chances);
	cout << endl;
	cout << "Please enter number hitchance for Player2: ";
	cin >> chances;
	p1.setNumChance(chances);
	cout << endl;

	while (mygame.getGameOver()==false)
	{
		mygame.playerRound(&p1);
		if (mygame.getGameOver()==true)
		{
			break;
		}
		mygame.playerRound(&p2);
	}

	return 0;
}