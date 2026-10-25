#include <iostream>
#include <string>
#include <cstdlib>

//#include "player.hpp"
//#include "Cards.cpp"

#include <list>
#include <vector>
#include <iostream>
#include <algorithm>
#include <functional>
#include <ctime>
#include <cstdlib>
#include "list.hpp"

using namespace std;


list_green::list_green()//CONSTRUCTOR
{
	list_head=NULL;
}

int list_green::list_empty()//WE CHECK IF THE LIST IS EMPTY
{
	return (list_head==NULL);
}

int list_green::add_node_to_list(GreenCard *card)//FUNCTION THAT INSERTS IN THE LIST A COPY ACCORDING TO THE ARGUMENT card
{
	list_node_green *neos=new (struct list_node_green);
	if(neos==NULL)
	{
		return 1;
	}
	neos->card=*card;
	neos->next=list_head;
	list_head=neos;
}

int list_green::list_green_destroy()//FUNCTION THAT DESTROYS THE WHOLE LIST
{
	list_node_green *temp;
	if(list_head==NULL)
	{
		return 1;
	}
	else
	{
		while(list_head)
		{
			temp=list_head;
			list_head=list_head->next;
			delete (temp);
		}
	}
	return 0;
}

list_green::~list_green()//DESTRUCTOR
{
	list_green_destroy();
}

struct  list_node_green  *list_green::find_node(GreenCard *key)//FUNCTION THAT FINDS IN A LIST A NODE ACCORDING TO THE key
{
	struct list_node_green *p;
	p=list_head;
	while(p)
	{
		if(p->card.get_name().compare(key->get_name())==0)
		{
			return p;
		}
		p=p->next;
	}
	return NULL;
}


list_black::list_black()//CONSTRUCTOR
{
	list_head=NULL;
}

int list_black::list_empty()//WE CHECK IF THE LIST IS EMPTY
{
	return (list_head==NULL);
}

int list_black::add_node_to_list(BlackCard * card)//FUNCTION THAT INSERTS IN THE LIST A COPY ACCORDING TO THE ARGUMENT card
{
	int flag=0;
	if(card->get_name_Card().compare("Ashio Copper Mine")==0)//WE SEE IF THE card IS A Mine 
	{
		struct list_node_black * temp_list = list_head;//IF IT IS WE CHECK IF IN THE LIST WE HAVE A Gold Mine IN ORDER TO CONNECT THEM
		while(temp_list != NULL)
		{
			if(temp_list->card.get_name_Card().compare("Konomai Gold Mine")==0)//THE ptr1 INDICATES subHolding(smaller) WHILE THE ptr2 INDICATES upperHolding(bigger)
			{
				if(temp_list->card.get_ptr1()==NULL)//IF THE Gold Mine HAS NOT BEEN CONNECTED WITH SOME OTHER Mine IN THE LIST WE CONNECT THEM 
				{
					temp_list->card.set_ptr1(card);//THE ptr1 THAT INDICATES SMALLER WILL POINT TO THE Mine
					card->set_ptr2( &(temp_list->card));//THE ptr2 THAT INDICATES BIGGER WILL POINT TO THE Gold Mine
					flag=1;
					break;
				}	
			}
			temp_list = temp_list->next;
		}
	}
	else if(card->get_name_Card().compare("Konomai Gold Mine") == 0)//WE SEE IF THE card IS A Gold Mine 
	{
		struct list_node_black * temp_list = list_head;//IF IT IS WE CHECK IF IN THE LIST WE HAVE A Crystal Mine OR A Mine IN ORDER TO CONNECT THEM 
		while(temp_list != NULL)
		{
			if(temp_list->card.get_name_Card().compare("Ichinokawa Crystal Mine")==0)
			{
				if(temp_list->card.get_ptr1()==NULL)//IF THE Crystal Mine HAS NOT BEEN CONNECTED WITH A Gold Mine IN THE LIST WE CONNECT THEM
				{
					temp_list->card.set_ptr1(card);//THE ptr1 THAT INDICATES SMALLER WILL POINT TO THE Gold Mine
					card->set_ptr2(&(temp_list->card));//THE ptr2 THAT INDICATES BIGGER WILL POINT TO THE Crystal Mine
					flag=1;
				}
			}
			else if(temp_list->card.get_name_Card().compare( "Ashio Copper Mine")==0)
			{
				if(temp_list->card.get_ptr2()==NULL)//IF THE Mine HAS NOT BEEN CONNECTED WITH ANOTHER Gold Mine IN THE LIST WE CONNECT THEM 
				{
					temp_list->card.set_ptr2(card);//THE ptr2 THAT INDICATES BIGGER WILL POINT TO THE Gold Mine
					card->set_ptr1(&(temp_list->card));//THE ptr1 THAT INDICATES SMALLER WILL POINT TO THE Mine
					flag=1;
				}
			}		
			temp_list = temp_list->next;
		}	
	}
	else if(card->get_name_Card().compare( "Ichinokawa Crystal Mine")==0)//WE SEE IF THE CARD IS A Crystal Mine
	{
		struct list_node_black * temp_list = list_head;
		while(temp_list!=NULL)//IF IT IS WE CHECK IF IN THE LIST WE HAVE A Gold Mine IN ORDER TO CONNECT THEM
		{
			if(temp_list->card.get_name_Card().compare("Konomai Gold Mine")==0)
			{
				if(temp_list->card.get_ptr2()==NULL)//IF THE Gold Mine HAS NOT BEEN CONNECTED WITH ANOTHER Crystal Mine IN THE LIST WE CONNECT THEM 
				{
					temp_list->card.set_ptr2(card);//THE ptr2 THAT INDICATES BIGGER WILL POINT TO THE Crystal Mine
					card->set_ptr1(&(temp_list->card));//THE ptr1 THAT INDICATES SMALLER WILL POINT TO THE Gold Mine
					flag=1;
					break;
				}	
			}			
			temp_list = temp_list->next;
		}
	}
	
	
	list_node_black *neos=new (struct list_node_black);//WE CREATE A NEW NODE 
	if(neos==NULL)
	{
		return 1;
	}
	neos->card=*card;//WE COPY ALL THE MEMBERS OF THE card TO THE NEW NODE
	neos->next=list_head;//AND WE CONNECT IT TO THE LIST 
	list_head=neos;
	
	
	
	BlackCard *temp=&(list_head->card);//IF THE card WAS A Mine OR Gold Mine OR Crystal Mine AND IT WAS CONNECTED WITH SOME Mine IN THE LIST THEN THIS Mine WILL POINT 
	struct list_node_black *position=list_head;//TO THE card INSTEAD OF THE NEW NODE THAT IS A COPY OF THE card SO WITH THE PROCEDURE BELOW WE MAKE THE Mine
	if(flag)									//POINT TO THE NEW NODE INSTEAD OF THE card
	{										//SO WE GO THROUGH ALL THE ELEMENTS OF THE LIST IF ABOVE A CONNECTION WAS MADE BETWEEN Mines
		while(position)
		{
			if(temp->get_name_Card().compare("Ichinokawa Crystal Mine")==0)
			{	
				if(temp->get_ptr1()==card->get_ptr1())//WITH THIS PROCEDURE WE SEE IF ABOVE A CONNECTION OF THE Crystal Mine WITH A Gold Mine WAS MADE
				{
					BlackCard *temp2=&(list_head->card);//WE GO THROUGH ALL THE ELEMENTS OF THE LIST UNTIL WE FIND THE SPECIFIC Gold Mine WITH WHICH IT HAS BEEN CONNECTED
					struct list_node_black *position2=list_head;
					while(temp->get_ptr1()!=temp2)
					{
						position2=position2->next;
						temp2=&(position2->card);
					}
					if(temp->get_ptr1()==temp2)
					{
						temp2->set_ptr2(&(neos->card));//AND WE MAKE THE ptr2 OF THE Gold Mine POINT TO THE NEW Crystal Mine THAT WAS A COPY OF THE card  
					}
				}
			}
			if(temp->get_name_Card().compare("Konomai Gold Mine")==0 ) 
			{	 
				int g;
				if(temp->get_ptr1()==NULL)//IF THE SPECIFIC  Gold Mine HAS NOT BEEN CONNECTED WITH A Mine
				{
					g=1;
				}
				else 
				{
					g=temp->get_ptr1()->get_name_Card().compare("Ashio Copper Mine");
				}
				if((temp->get_ptr1()==card->get_ptr1()) && g!=1)//WITH THIS PROCEDURE WE SEE IF THE Gold Mine HAS BEEN CONNECTED WITH A Mine
				{
					BlackCard *temp2=&(list_head->card);
					struct list_node_black *position2=list_head;//WE GO THROUGH ALL THE ELEMENTS OF THE LIST UNTIL WE FIND THE SPECIFIC Mine WITH WHICH IT HAS BEEN CONNECTED
					while(temp->get_ptr1()!=temp2)
					{
						position2=position2->next;
						temp2=&(position2->card);
					}
					if(temp->get_ptr1()==temp2)
					{
						temp2->set_ptr2(&(neos->card));//AND WE MAKE THE ptr2 OF THE Mine POINT TO THE NEW Gold Mine THAT WAS A COPY OF THE card
					}
				}
				int i;
				if(temp->get_ptr2()==NULL)//IF THE SPECIFIC  Gold Mine HAS NOT BEEN CONNECTED WITH A Crystal Mine
				{
					i=1;
				}
				else
				{
					i=temp->get_ptr2()->get_name_Card().compare("Ichinokawa Crystal Mine");
				}
				if((temp->get_ptr2()==card->get_ptr2() && i!=1 ) )//WITH THIS PROCEDURE WE SEE IF THE Gold Mine HAS BEEN CONNECTED WITH A Crystal Mine
				{
					BlackCard *temp2=&(list_head->card);
					struct list_node_black *position2=list_head;//WE GO THROUGH ALL THE ELEMENTS OF THE LIST UNTIL WE FIND THE SPECIFIC Crystal Mine WITH WHICH IT HAS BEEN CONNECTED
					while(temp->get_ptr2()!=temp2)						
					{
						position2=position2->next;
						temp2=&(position2->card);
					}
					if(temp->get_ptr2()==temp2)
					{
						temp2->set_ptr1(&(neos->card));//AND WE MAKE THE ptr1 OF THE Crystal Mine POINT TO THE NEW Gold Mine THAT WAS A COPY OF THE card
					}
				}
			}
			if(temp->get_name_Card().compare("Ashio Copper Mine")==0 ) 
			{
				if(temp->get_ptr2()==card->get_ptr2())//WITH THIS PROCEDURE WE SEE IF THE Mine HAS BEEN CONNECTED WITH A Gold Mine
				{
						BlackCard *temp2=&(list_head->card);
						struct list_node_black *position2=list_head;
						position2=list_head;
						temp2=&(list_head->card);
						while(temp->get_ptr2()!=temp2)//WE GO THROUGH ALL THE ELEMENTS OF THE LIST UNTIL WE FIND THE SPECIFIC Gold Mine WITH WHICH IT HAS BEEN CONNECTED
						{
							position2=position2->next;
							temp2=&(position2->card);
						}
						if(temp->get_ptr2()==temp2)
						{
							temp2->set_ptr1(&(neos->card));//AND WE MAKE THE ptr1 OF THE Gold Mine POINT TO THE NEW Mine THAT WAS A COPY OF THE card
						}
				}
			}
			position=position->next;
			temp=&(position->card);
		}
	}
}

int list_black::list_black_destroy()//FUNCTION THAT DESTROYS THE WHOLE LIST
{
	list_node_black *temp;
	if(list_head==NULL)
	{
		return 1;
	}
	else
	{
		while(list_head)
		{
			temp=list_head;
			list_head=list_head->next;
			delete (temp);
		}
	}
	return 0;
}

list_black::~list_black()//DESTRUCTOR
{
	list_black_destroy();
}

struct  list_node_black  *list_black::find_node(BlackCard *key)//FUNCTION THAT FINDS IN A LIST A NODE ACCORDING TO THE key
{
	struct list_node_black *p;
	p=list_head;
	while(p)
	{
		if(p->card.get_name().compare(key->get_name())==0)
		{
			return p;
		}
		p=p->next;
	}
	return NULL;
}
