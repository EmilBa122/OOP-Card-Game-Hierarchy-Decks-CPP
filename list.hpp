#ifndef LIST_HPP
#define LIST_HPP

#include "Cards.cpp"
#include "DeckBuilder.hpp"

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


struct list_node_green{//NODE THAT CONTAINS A GREEN CARD AND A POINTER THAT POINTS TO THE NEXT NODE 
	GreenCard card;
	struct list_node_green *next;
};

class list_green{//CLASS THAT INDICATES A LIST OF GREEN CARDS 
	private:
		struct list_node_green *list_head;//CONTAINS A POINTER THAT POINTS TO THE FIRST NODE OF THE LIST 
	public:
		list_green();//CONSTRUCTOR
		int list_empty();//WE CHECK IF THE LIST IS EMPTY
		int add_node_to_list(GreenCard *card);//FUNCTION THAT INSERTS IN THE LIST A COPY ACCORDING TO THE ARGUMENT card
		struct list_node_green * find_node(GreenCard *key);//FUNCTION THAT FINDS IN A LIST A NODE ACCORDING TO THE key
		int list_green_destroy();//FUNCTION THAT DESTROYS THE WHOLE LIST
		~list_green();//DESTRUCTOR
};

struct list_node_black{//NODE THAT CONTAINS A BLACK CARD AND A POINTER THAT POINTS TO THE NEXT NODE
	BlackCard card;
	struct list_node_black *next;
};

class list_black{//CLASS THAT INDICATES A LIST OF BLACK CARDS
	private:
		struct list_node_black *list_head;//CONTAINS A POINTER THAT POINTS TO THE FIRST NODE OF A LIST
	public:
		list_black();//CONSTRUCTOR
		int list_empty();//WE CHECK IF THE LIST IS EMPTY
		int add_node_to_list(BlackCard * card);//FUNCTION THAT INSERTS IN THE LIST A COPY ACCORDING TO THE ARGUMENT card
		struct list_node_black * find_node(BlackCard *key);//FUNCTION THAT FINDS IN A LIST A NODE ACCORDING TO THE key
		int list_black_destroy();//FUNCTION THAT DESTROYS THE WHOLE LIST
		~list_black();//DESTRUCTOR
};

#endif
