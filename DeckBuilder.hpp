#ifndef DECK_HPP
#define DECK_HPP

#include "list.hpp"
#include "Cards.cpp"

#include <iostream>
#include <string>
#include <cstdlib>
#include <list>
#include <vector>
#include <iostream>
#include <algorithm>
#include <functional>
#include <ctime>
#include <cstdlib>

class DeckBuilder
{
	private:
		list<GreenCard*>* green;
		list<BlackCard*>* black;
	public:
		DeckBuilder();
		~DeckBuilder();
		list<GreenCard *>* createFateDeck();
	 	list<BlackCard *>* createDynastyDeck();

	 	void deckShuffler(list<BlackCard *> *black);
		void deckShuffler(list<GreenCard *> *green);
		
	 	list<GreenCard *> *get_green();
		list<BlackCard *> *get_black();
	
	
};

#endif