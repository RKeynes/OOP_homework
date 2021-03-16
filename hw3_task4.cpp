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

	}
};