game: Cards.o list.o DeckBuilder.o Palyer.o
	g++ -o Cards.o list.o DeckBuilder.o Palyer.o -o game

Palyer.o: Palyer.cpp 
	g++ -c Palyer.cpp

list.o: list.cpp 
	g++ -c list.cpp

DeckBuilder.o: DeckBuilder.cpp
	g++ -c DeckBuilder.cpp

clean: rm DeckBuilder.o game Cards.o list.o Palyer.o
