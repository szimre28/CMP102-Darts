#include "Board.h"
#include <ctime>
#include <cstdlib>

int Board::missedNum(int target)
{
	int index = 0;
	for (int i = 0; i < 21; i++)
	{
		if (target == dartboard[i])
		{
			index = i;
		}
	}

	int random = randomGen();

	if (index == 0)
	{
		if (random < 11)
		{
			return 5;
		}
		else
		{
			return 1;
		}
	}

	if (random <11)
	{
		return dartboard[index - 1];
	}
	else
	{
		return dartboard[index + 1];
	}
}

int Board::missedBull()
{
	return randomGen();
}

int Board::randomGen()
{
	int result = 0;
	result = rand() % 20 + 1;
	return result;
}
