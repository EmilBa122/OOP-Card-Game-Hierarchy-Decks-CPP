#include <iostream>
#include <string>
#include <cstdlib>
//#include "player.hpp"
//#include "Cards.cpp"

#include "Player.hpp"

#include <list>
#include <vector>
#include <iostream>
#include <algorithm>
#include <functional>
#include <ctime>
#include <cstdlib>


using namespace std;


Player::Player():sth(st)//THE CLASS Stronghold RECEIVES THE CLASS start THAT CONTAINS THE MONEY,THE HONOUR AND THE FOUR PROVINCES IN ORDER TO INITIALIZE THEM 
{
	Cards.createFateDeck();
	Cards.createDynastyDeck();
	Cards.deckShuffler(Cards.get_black());
	Cards.deckShuffler(Cards.get_green());
	
	//FROM HERE AND BELOW THEY SHOULD NOT NORMALLY EXIST BUT I HAVE WRITTEN THEM SO THAT YOU CAN SEE THAT THE PROGRAM RUNS WHEN I PUT CARDS IN THE LIST
	holding.add_node_to_list(new Plain("Rice Fields"));
	holding.add_node_to_list(new Mine("Ashio Copper Mine"));
	holding.add_node_to_list(new GoldMine("Konomai Gold Mine"));//THE SAME ALSO APPLIES TO THE OTHER LIST THAT THE Player HAS I.E. TO THE army//
	holding.add_node_to_list(new CrystalMine("Ichinokawa Crystal Mine"));
	holding.add_node_to_list(new Plain("Rice Fields"));
	
	hand.add_node_to_list(new Footsoldier("Peasants"));
	hand.add_node_to_list(new Katana("Daijtso"));
	hand.add_node_to_list(new Bow("Yumi"));
	hand.add_node_to_list(new Archer("Elite Troops"));	
}

Player::~Player()
{
	
}

int main()
{
	Player pl;
}
