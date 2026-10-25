# OOP Card Game Hierarchy Decks CPP

## Assignment Description
Implementing in C++ a card game using Object-Oriented Programming, i.e. using classes, a class hierarchy with inheritance
and objects linked with each other

## Usage Instructions for the program:

1. Open Linux terminal
2. TYPE `unzip project.zip`
3. TYPE `make`
4. TYPE `./game`

## Program design idea

In the file `Cards.cpp` all the types of cards that exist in the game have been
implemented and have been connected with the category of cards to which they
belong (`GreenCard` or `BlackCard`) as their subclasses. Especially in the class
`BlackCard` I have defined two pointers that point to `BlackCard` cards, which
will later be used for the creation of a chain between the Mines, the `ptr1`
points to `subHolding` (smaller Mines) and the `ptr2` points to `upperHolding`
(bigger Mines) than the specific Mine. The class `start` contains the money, the
honour and a variable of type `prov` that refers to the class that corresponds
to the four provinces that each player has. The class `Stronghold` gives to each
player his initial honour, the initial amount of money that he will have as well
as the defence that each province of his has.

In the file `list.hpp` we define a list that will contain `GreenCard`
(`list_green`) which in its `private` part has a pointer that points to the
first node of the list, for the representation of the nodes of the list I use
the `struct list_node_green` that has a `GreenCard` and a pointer the `next`
that points to the next node `list_node_green` if it exists, in the `public`
part of the list we have some basic functions for the management of the list.
Also we define a list that will contain `BlackCard` (`list_black`) which in its
`private` part has a pointer that points to the first node of the list, for the
representation of the nodes of the list I use the `struct list_node_black` that
has a `BlackCard` and a pointer that points to the next node `list_node_black`
if it exists, in the `public` part of the list we have some basic functions for
the management of the list.

**THE FUNCTION `add_node_to_list` THAT EXISTS IN THE `list.cpp` RECEIVES AS AN
ARGUMENT A POINTER THAT POINTS TO A `BlackCard`. WE CHECK IF THIS CARD IS A
`Mine` AND IF IT IS WE CHECK WHETHER WE HAVE IN THE LIST SOME CARD `GoldMine` IF
YES AND IT HAS NOT BEEN CONNECTED WITH ANOTHER `Mine` IN THE LIST THEN WE MAKE
THE `ptr1` OF THE `GoldMine` POINT TO THE `Mine` (THE `ptr1` INDICATES SMALLER)
AND THE `ptr2` OF THE `Mine` POINT TO THE `GoldMine` (THE `ptr2` INDICATES
BIGGER). IF THIS CARD THAT I WANT TO INSERT IN THE LIST IS A `GoldMine` WE CHECK
IF THERE IS IN THE LIST A `Mine` OR ALSO A `CrystalMine` IN ORDER TO CONNECT
THEM. IF THERE IS A `Mine` IN THE LIST AND IT HAS NOT BEEN CONNECTED WITH SOME
OTHER `GoldMine` I CONNECT THEM IN A SIMILAR WAY AS BEFORE WHERE WE HAD A `Mine`
AND A `GoldMine`. IF THERE IS A `CrystalMine` AND IT HAS NOT BEEN CONNECTED WITH
SOME OTHER `GoldMine` I CONNECT THEM. FINALLY IF THE CARD THAT I WANT TO INSERT
IN THE LIST IS A `CrystalMine` I SEE IF THERE IS ANY FREE `GoldMine` IN THE LIST
AND I CONNECT THEM. THEN I CREATE A NEW NODE (`neos`) INTO WHICH I COPY ALL THE
ELEMENTS POINTED TO BY THE POINTER THAT COMES AS AN ARGUMENT TO THE FUNCTION,
THAT IS THE `neos` IS A COPY OF THE CARD THAT WE HAD BEFORE. IF THIS ORIGINAL
CARD WAS A `Mine` OR `GoldMine` OR `CrystalMine` AND IT HAD BEEN CONNECTED WITH
ANOTHER `Mine` OR `GoldMine` OR `CrystalMine` IN THE LIST THE `ptr1` AND THE
`ptr2` OF THE `neos` WILL POINT CORRECTLY BECAUSE IT IS A COPY OF THE CARD THAT
WE HAD BEFORE BUT AT THE ADDRESS POINTED TO BY THE `ptr1` OR THE `ptr2` OF THIS
CARD THE `ptr1` OR THE `ptr2` DO NOT POINT TO THE `neos` BUT CONTINUE TO POINT
TO THE POINTER THAT CAME AS AN ARGUMENT TO THIS FUNCTION. SO IN THE FUNCTION
THERE IS A PROCEDURE THAT "CORRECTS" THESE POINTERS SO THAT THEY NOW POINT TO
THE `neos` IF ABOVE WE HAD A CONNECTION BETWEEN `Mine`, `GoldMine` OR ALSO
`CrystalMine`.**

In the `player.hpp` we define a class `Player` that represents a player of the
game who has two main collections of cards `fateDeck` and `dynastyDeck`
(`DeckBuilder`), has a list of `GreenCard` that represent the cards that he has
in his hand (`hand`), has a list of `BlackCard` that correspond to the holdings
that he has, has one more list of `BlackCard` that correspond to the active
personalities that the player uses for the war, has a variable of type `start`
that contains the money, the honour and the four provinces that each player has
and has a `Stronghold` that is used for their initialization.

## THEREFORE THE FOLLOWING HAVE BEEN IMPLEMENTED

- 1.2 Description of Cards
- 2.1 Types per category of cards
- 2.2
  - 2.2.1 Chain Creation
  - 2.2.2 ONLY THE Chain creation rules
- 2.3 Description of players (`Player`)
