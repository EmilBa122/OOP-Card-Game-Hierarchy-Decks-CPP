#ifndef CARDS_HPP
#define CARDS_HPP

#include <iostream>
#include <string>
#include <cstdlib>

//#include "DeckBuilder.hpp"
//#include "Player.hpp"
//#include "list.hpp"

using namespace std;

class Card{//CLASS THAT IS USED FOR THE CARD 
	private:
		string name;
		int cost;
		int isTapped;
	public:
		Card()//CONSTRUCTOR
		{
			name=" ";
			cost=0;
		}
		void print_card()
		{
			cout<<name<<endl;
		}
		void set_name_card(string s1)//ASSIGNS TO THE name OF THE Card THE s1
		{
			name=s1;
		}
		void set_cost(int i)//ASSIGNS TO THE cost OF THE Card THE i
		{
			cost=i;	
		}	
		string get_name_Card()
		{
			return name;
		}
		int get_cost()
		{
			return cost;
		}
		virtual ~Card()//DESTRUCTOR
		{
			
		}
};

class GreenCard:public Card{//CLASS THAT IS USED FOR THE GreenCard
	private:
		int attackBonus;
		int defenceBonus;
		int minimumHonour;
		string cardText;
		int effectCost;
		int effectBonus;
		int durability;
		string name;
	public:
		GreenCard()//CONSTRUCTOR
		{
			
		}
		~GreenCard()//DESTRUCTOR
		{
			
		}
		string get_name()
		{
			return name;
		}
		void set_name_GreenCard(string s1)//ASSIGNS TO THE name OF THE GreenCard THE s1
		{
			name=s1;	
		}	
		void set_attackBonus(int i)//ASSIGNS TO THE attackBonus OF THE GreenCard THE i
		{
			attackBonus=i;
		}
		void set_defenceBonus(int i)//ASSIGNS TO THE defenceBonus OF THE GreenCard THE i
		{
			defenceBonus=i;
		}
		void set_minimunHonour(int i)//ASSIGNS TO THE minimunHonour OF THE GreenCard THE i
		{
			minimumHonour=i;
		}
		void set_effectCost(int i)//ASSIGNS TO THE effectCost OF THE GreenCard THE i
		{
			effectCost=i;
		}
		void set_durability(int i)//ASSIGNS TO THE durability OF THE GreenCard THE i
		{
			durability=i;
		}
		void set_effectBonus(int i)//ASSIGNS TO THE effectBonus OF THE GreenCard THE i
		{
			effectBonus=i;
		}
		
};

class Katana:public GreenCard{
	public:
		Katana(string s1)//CONSTRUCTOR OF THIS CLASS THAT RECEIVES THE NAME OF THIS CARD(s1) AND ASSIGNS THE APPROPRIATE VALUES TO THE MEMBERS OF THE CARD
		{
			set_name_GreenCard("Item");
			set_name_card(s1);
			set_cost(0);
			set_attackBonus(2);
			set_defenceBonus(0);
			set_minimunHonour(1);
			set_effectCost(2);
			set_effectBonus(1);
			set_durability(3);
		}
};

class Bow:public GreenCard{
	public:
		Bow(string s1)//CONSTRUCTOR OF THIS CLASS THAT RECEIVES THE NAME OF THIS CARD(s1) AND ASSIGNS THE APPROPRIATE VALUES TO THE MEMBERS OF THE CARD
		{
			set_name_GreenCard("Item");
			set_name_card(s1);
			set_cost(2);
			set_attackBonus(2);
			set_defenceBonus(2);
			set_minimunHonour(2);
			set_effectCost(4);
			set_effectBonus(3);
			set_durability(5);
		}
};

class Wakizashi:public GreenCard{
	public:
		Wakizashi(string s1)//CONSTRUCTOR OF THIS CLASS THAT RECEIVES THE NAME OF THIS CARD(s1) AND ASSIGNS THE APPROPRIATE VALUES TO THE MEMBERS OF THE CARD
		{
			set_name_GreenCard("Item");
			set_name_card(s1);
			set_cost(8);
			set_attackBonus(5);
			set_defenceBonus(5);
			set_minimunHonour(3);
			set_effectCost(3);
			set_effectBonus(3);
			set_durability(8);
		}
};

class Spear:public GreenCard{
	public:
		Spear(string s1)//CONSTRUCTOR OF THIS CLASS THAT RECEIVES THE NAME OF THIS CARD(s1) AND ASSIGNS THE APPROPRIATE VALUES TO THE MEMBERS OF THE CARD
		{
			set_name_GreenCard("Item");
			set_name_card(s1);
			set_cost(0);
			set_attackBonus(0);
			set_defenceBonus(2);
			set_minimunHonour(1);
			set_effectCost(2);
			set_effectBonus(1);
			set_durability(3);	
		}
};

class Ninjato:public GreenCard{
	public:
		Ninjato(string s1)//CONSTRUCTOR OF THIS CLASS THAT RECEIVES THE NAME OF THIS CARD(s1) AND ASSIGNS THE APPROPRIATE VALUES TO THE MEMBERS OF THE CARD
		{
			set_name_GreenCard("Item");
			set_name_card(s1);
			set_cost(4);
			set_attackBonus(3);
			set_defenceBonus(3);
			set_minimunHonour(3);
			set_effectCost(2);
			set_effectBonus(2);
			set_durability(4);
		}
};

class Footsoldier:public GreenCard{
	public:
		Footsoldier(string s1)//CONSTRUCTOR OF THIS CLASS THAT RECEIVES THE NAME OF THIS CARD(s1) AND ASSIGNS THE APPROPRIATE VALUES TO THE MEMBERS OF THE CARD
		{
			set_name_GreenCard("Follower");
			set_name_card(s1);
			set_cost(0);
			set_attackBonus(2);
			set_defenceBonus(0);
			set_minimunHonour(1);
			set_effectCost(2);
			set_effectBonus(1);
			set_durability(0);
		}
};

class Archer:public GreenCard{
	public:
		Archer(string s1)//CONSTRUCTOR OF THIS CLASS THAT RECEIVES THE NAME OF THIS CARD(s1) AND ASSIGNS THE APPROPRIATE VALUES TO THE MEMBERS OF THE CARD
		{
			set_name_GreenCard("Follower");
			set_name_card(s1);
			set_cost(0);
			set_attackBonus(0);
			set_defenceBonus(2);
			set_minimunHonour(1);
			set_effectCost(2);
			set_effectBonus(1);
			set_durability(0);
		}
};

class Sieger:public GreenCard{
	public:
		Sieger(string s1)//CONSTRUCTOR OF THIS CLASS THAT RECEIVES THE NAME OF THIS CARD(s1) AND ASSIGNS THE APPROPRIATE VALUES TO THE MEMBERS OF THE CARD
		{
			set_name_GreenCard("Follower");
			set_name_card(s1);
			set_cost(5);
			set_attackBonus(3);
			set_defenceBonus(3);
			set_minimunHonour(2);
			set_effectCost(3);
			set_effectBonus(2);
			set_durability(0);
		}
};

class Cavalry:public GreenCard{
	public:
		Cavalry(string s1)//CONSTRUCTOR OF THIS CLASS THAT RECEIVES THE NAME OF THIS CARD(s1) AND ASSIGNS THE APPROPRIATE VALUES TO THE MEMBERS OF THE CARD
		{
			set_name_GreenCard("Follower");
			set_name_card(s1);
			set_cost(3);
			set_attackBonus(4);
			set_defenceBonus(2);
			set_minimunHonour(3);
			set_effectCost(4);
			set_effectBonus(3);
			set_durability(0);
		}
};

class Atakebune:public GreenCard{
	public:
		Atakebune(string s1)//CONSTRUCTOR OF THIS CLASS THAT RECEIVES THE NAME OF THIS CARD(s1) AND ASSIGNS THE APPROPRIATE VALUES TO THE MEMBERS OF THE CARD
		{
			set_name_GreenCard("Follower");
			set_name_card(s1);
			set_cost(3);
			set_attackBonus(2);
			set_defenceBonus(4);
			set_minimunHonour(3);
			set_effectCost(4);
			set_effectBonus(3);
			set_durability(0);
		}
};

class Bushido:public GreenCard{
	public:
		Bushido(string s1)//CONSTRUCTOR OF THIS CLASS THAT RECEIVES THE NAME OF THIS CARD(s1) AND ASSIGNS THE APPROPRIATE VALUES TO THE MEMBERS OF THE CARD
		{
			set_name_GreenCard("Follower");
			set_name_card(s1);
			set_cost(8);
			set_attackBonus(8);
			set_defenceBonus(8);
			set_minimunHonour(6);
			set_effectCost(8);
			set_effectBonus(3);
			set_durability(0);
		}
};

class BlackCard:public Card{//CLASS THAT IS USED FOR THE BlackCard
	private:
		int isReleaved;
		int attack;
		int defence;
		int honour;
		int isDead;
		
		
		int harvestValue;
		string Holding;
		string name;

		BlackCard * ptr1;//THE ptr1 IS A POINTER THAT IS USED ONLY FOR THE Mines AND POINTS TO subHolding(smaller)
		BlackCard * ptr2;//THE ptr2 IS A POINTER THAT IS USED ONLY FOR THE Mines AND POINTS TO upperHolding(bigger)

		
	public:
		BlackCard()//CONSTRUCTOR
		{
			ptr1=NULL;
			ptr2=NULL;	
		}
		~BlackCard()//DESTRUCTOR
		{
			
		}
		string get_name()
		{
			return name;
		}
		int get_attack()
		{
			return attack;
		}
		int get_defence()
		{
			return defence;
		}
		int get_honour()
		{
			return honour;
		}
		int get_harvestValue()
		{
			return harvestValue;
		}
		string get_Holding()
		{
			return Holding;
		}
		void set_name_BlackCard(string s1)//ASSIGNS THE name OF THE BlackCard
		{
			name=s1;	
		}
		void set_attack(int i)//ASSIGNS THE attack OF THE BlackCard
		{
			attack=i;	
		}	
		void set_defence(int i)//ASSIGNS THE defence OF THE BlackCard
		{
			defence=i;
		}
		void set_honour(int i)//ASSIGNS THE honour OF THE BlackCard
		{
			honour=i;
		}
		void set_harvestValue(int i)//ASSIGNS THE harvestValue OF THE BlackCard
		{
			harvestValue=i;
		}
		void set_Holding(string s1)//ASSIGNS THE Holding OF THE BlackCard
		{
			Holding=s1;
		}
		void set_ptr1(BlackCard * p)//ASSIGNS TO THE POINTER ptr1 THE APPROPRIATE Mine WHERE IT IS SMALLER THAN THAT OF THE SPECIFIC CARD
		{
			ptr1 = p;
		}
		void set_ptr2(BlackCard * p)//ASSIGNS TO THE POINTER ptr2 THE APPROPRIATE Mine WHERE IT IS BIGGER THAN THAT OF THE SPECIFIC CARD
		{
			ptr2=p;
		}
		BlackCard * get_ptr1()
		{
			return ptr1;
		}		
		BlackCard * get_ptr2()
		{
			return ptr2;
		}
		BlackCard & operator=(BlackCard & s)//THIS FUNCTION IS USED FOR THE '=' THAT IS DONE IN THE FUNCTION add_node_to_list(BlackCard * card);	
		{
			if(this!=&s)
			{
				this->name=s.get_name();
				this->set_name_card(s.get_name_Card());
				this->set_cost(s.get_cost());
				this->set_attack(s.get_attack());
				this->set_defence(s.get_defence());
				this->set_honour(s.get_honour());
				this->set_harvestValue(s.get_harvestValue());
				this->Holding=s.get_Holding();
				this->set_ptr1(s.get_ptr1());
				this->set_ptr2(s.get_ptr2());
			}
			return *this;
		}

};

class Defender:public BlackCard{//CONSTRUCTOR OF THIS CLASS THAT RECEIVES THE NAME OF THIS CARD(s1) AND ASSIGNS THE APPROPRIATE VALUES TO THE MEMBERS OF THE CARD
	public:
		Defender(string s1)
		{
			set_name_BlackCard("Personality");
			set_name_card(s1);
			set_cost(5);
			set_attack(2);
			set_defence(3);
			set_honour(2);
			set_harvestValue(0);
			set_Holding(" ");
		}
};

class Attacker:public BlackCard{//CONSTRUCTOR OF THIS CLASS THAT RECEIVES THE NAME OF THIS CARD(s1) AND ASSIGNS THE APPROPRIATE VALUES TO THE MEMBERS OF THE CARD
	public:
		Attacker(string s1)
		{
			set_name_BlackCard("Personality");
			set_name_card(s1);
			set_cost(5);
			set_attack(3);
			set_defence(2);
			set_honour(2);
			set_harvestValue(0);
			set_Holding(" ");
		}
};

class Shogun:public BlackCard{//CONSTRUCTOR OF THIS CLASS THAT RECEIVES THE NAME OF THIS CARD(s1) AND ASSIGNS THE APPROPRIATE VALUES TO THE MEMBERS OF THE CARD
	public:
		Shogun(string s1)
		{
			set_name_BlackCard("Personality");
			set_name_card(s1);
			set_cost(15);
			set_attack(10);
			set_defence(5);
			set_honour(8);
			set_harvestValue(0);
			set_Holding(" ");
		}
};

class Chancellor:public BlackCard{//CONSTRUCTOR OF THIS CLASS THAT RECEIVES THE NAME OF THIS CARD(s1) AND ASSIGNS THE APPROPRIATE VALUES TO THE MEMBERS OF THE CARD
	public:
		Chancellor(string s1)
		{
			set_name_BlackCard("Personality");
			set_name_card(s1);
			set_cost(15);
			set_attack(5);
			set_defence(10);
			set_honour(8);
			set_harvestValue(0);
			set_Holding(" ");
		}
};

class Champion:public BlackCard{//CONSTRUCTOR OF THIS CLASS THAT RECEIVES THE NAME OF THIS CARD(s1) AND ASSIGNS THE APPROPRIATE VALUES TO THE MEMBERS OF THE CARD
	public:
		Champion(string s1)
		{
			set_name_BlackCard("Personality");
			set_name_card(s1);
			set_cost(30);
			set_attack(20);
			set_defence(20);
			set_honour(12);
			set_harvestValue(0);
			set_Holding(" ");
		}
};

class GiftsandFavour:public BlackCard{//CONSTRUCTOR OF THIS CLASS THAT RECEIVES THE NAME OF THIS CARD(s1) AND ASSIGNS THE APPROPRIATE VALUES TO THE MEMBERS OF THE CARD
	public:
		GiftsandFavour(string s1)
		{
			set_name_BlackCard("Holding");
			set_name_card(s1);
			set_cost(2);
			set_attack(0);
			set_defence(0);
			set_honour(0);
			set_harvestValue(2);
			set_Holding(" ");
		}
};

class Plain:public BlackCard{//CONSTRUCTOR OF THIS CLASS THAT RECEIVES THE NAME OF THIS CARD(s1) AND ASSIGNS THE APPROPRIATE VALUES TO THE MEMBERS OF THE CARD
	public:
		Plain(string s1)
		{
			set_name_BlackCard("Holding");
			set_name_card(s1);
			set_cost(2);
			set_attack(0);
			set_defence(0);
			set_honour(0);
			set_harvestValue(2);
			set_Holding(" ");
		}
};

class Farmland:public BlackCard{//CONSTRUCTOR OF THIS CLASS THAT RECEIVES THE NAME OF THIS CARD(s1) AND ASSIGNS THE APPROPRIATE VALUES TO THE MEMBERS OF THE CARD
	public:
		Farmland(string s1)
		{
			set_name_BlackCard("Holding");
			set_name_card(s1);
			set_cost(3);
			set_attack(0);
			set_defence(0);
			set_honour(0);
			set_harvestValue(4);
			set_Holding(" ");
		}
};


class Mine:public BlackCard{//CONSTRUCTOR OF THIS CLASS THAT RECEIVES THE NAME OF THIS CARD(s1) AND ASSIGNS THE APPROPRIATE VALUES TO THE MEMBERS OF THE CARD
	public:
		Mine(string s1)
		{
			set_name_BlackCard("Holding");
			set_name_card(s1);
			set_cost(5);
			set_attack(0);
			set_defence(0);
			set_honour(0);
			set_harvestValue(3);
			set_Holding(" ");
		}
};

class GoldMine:public BlackCard{//CONSTRUCTOR OF THIS CLASS THAT RECEIVES THE NAME OF THIS CARD(s1) AND ASSIGNS THE APPROPRIATE VALUES TO THE MEMBERS OF THE CARD
	public:
		GoldMine(string s1)
		{
			set_name_BlackCard("Holding");
			set_name_card(s1);
			set_cost(7);
			set_attack(0);
			set_defence(0);
			set_honour(0);
			set_harvestValue(5);
			set_Holding(" ");
		}
};

class CrystalMine:public BlackCard{//CONSTRUCTOR OF THIS CLASS THAT RECEIVES THE NAME OF THIS CARD(s1) AND ASSIGNS THE APPROPRIATE VALUES TO THE MEMBERS OF THE CARD
	public:
		CrystalMine(string s1)
		{
			set_name_BlackCard("Holding");
			set_name_card(s1);
			set_cost(12);
			set_attack(0);
			set_defence(0);
			set_honour(0);
			set_harvestValue(6);
			set_Holding(" ");	
		}			
};



class province{//CLASS THAT CORRESPONDS TO THE FOUR PROVINCES THAT EACH PLAYER HAS 
	private:
		int pro[4];
	public:
		province()//CONSTRUCTOR
		{
			
		}
		void set_pro(int i)//EACH ONE OF THE FOUR PROVINCES OF THE PLAYER WILL HAVE DEFENCE ACCORDING TO THE VALUE OF i
		{
			int g;
			for(g=0; g<4; g++)
			{
				pro[g]=i;	
			}	
		}	
};


class start{//CLASS THAT CONTAINS THE MONEY,THE HONOUR AND THE FOUR PROVINCES THAT EACH PLAYER HAS
	public:
		int money;
		int honour;
		province prov;
		void print()
		{
			cout<<money<<" "<<honour<<endl;
		}
};

class Stronghold//CLASS THAT GIVES TO EACH PLAYER HIS INITIAL HONOUR,THE INITIAL AMOUNT OF MONEY THAT HE WILL HAVE AS WELL AS THE DEFENCE THAT EACH PROVINCE OF HIS HAS
{
	public:
		Stronghold(start  & st)
		{
			st.money=5;
			st.honour=5;
			st.prov.set_pro(5);
		}
};

#endif


