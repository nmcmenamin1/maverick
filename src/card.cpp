#include "card.h"

card::card(int suit, int rank)
{
	init(suit, rank);
	
};


void card::init(int suit, int rank)
{
	//default set state to start
	card::suit = suit;
	card::rank = rank;
}

int card::getRank()
{
	//default set state to start
	return card::rank;
}

int card::getSuit()
{
	//default set state to start
	return card::suit;
}
