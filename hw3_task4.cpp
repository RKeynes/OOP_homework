#include <iostream>
using namespace std;

class Card
{
	enum suit { Spades, Hearts, Clubs, Diamonds };
	enum values { two, three, four, five, six, seven, eight, nine, ten, J, Q, K, A };
	bool position = true;

	void Flip()
	{
		if(position == true)
		{
			position = false;
		}
		else
		{
			position = true;
		}
	}

	void GetValue()
	{
		values two = 2;
		values three = 3;
		values four = 4;
		values five = 5;
		values six = 6;
		values seven = 7;
		values eight = 8;
		values nine = 9;
		values ten = 10;
		values J = 10;
		values Q = 10;
		values K = 10;
		values A = 1;

		return values;
	}
};