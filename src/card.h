#ifndef CARD_H
#define CARD_H

enum 
{
    CLUBS,
    DIAMONDS,
    HEARTS,
    SPADES
};

enum
{
    TWO,
    THREE,
    FOUR,
    FIVE,
    SIX,
    SEVEN,
    EIGHT,
    NINE,
    TEN, 
    JACK, 
    QUEEN, 
    KING, 
    ACE
};

class card
{
public:

	card(int suit, int rank);
	
	void init(int suit, int rank);
	int getRank();
	int getSuit();
	
	int suit;
	int rank;

};



#endif // BOT_H
