//X00110033
//Samir Kahvedzic

#include <iostream>
#include "deck.h"

using namespace std;

int main() {
    deck myDeck;
    myDeck.insertFront(1);
    myDeck.insertFront(2);
    myDeck.insertFront(3);
    myDeck.insertFront(4);
    myDeck.insertFront(5);

    myDeck.insertBack(33333);
    myDeck.insertBack(3333);
    myDeck.insertBack(333);
    myDeck.insertBack(33);
    myDeck.insertBack(3);

    myDeck.insertFront(6);
    myDeck.insertFront(7);
    myDeck.insertFront(8);
    myDeck.insertFront(9);
    myDeck.insertFront(10);

    //myDeck.display();
    cout << myDeck;

    //myDeck.removeFront(1);

    return 0;
}