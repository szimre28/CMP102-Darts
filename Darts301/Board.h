#pragma once
class Board
{
private:
	int dartboard[21] = {20,1,18,4,13,6,10,15,2,17,3,19,7,16,8,11,14,9,12,5,20};
public:
	int missedNum(int target);
	int missedBull();
	int randomGen();
};

