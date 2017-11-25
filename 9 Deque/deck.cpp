//X00110033
//Samir Kahvedzic

#include <c++/ostream>
#include <c++/iostream>
#include "deck.h"
using namespace std;

deck::deck(){
    cap = 10;
    myArray = new int[cap];
    size = 0;
    front = 0;
    back = cap-1;
}
deck::~deck(){
    delete myArray;
}

bool deck::isEmpty(){
    if(size != 0){
        return false;
    }else{
        return true;
    }
};
bool deck::isFull(){
    if(size != 0){
        return true;
    }else{
        return false;
    }
};
bool deck::insertFront(int a){

    if(front != 0){       //If it is not empty
        front = front -1; //decrementing
        myArray[front] = a;
        size++;
    }else{
            front = cap-1;
        //myArray[front] = a;
    }
    return false;
}

void deck::display(){
    if(size != 0){
        for(int n=0;n<size;n++){
            cout << myArray[n] << endl;
        }
    }else{
        cout << "Empty" << endl;
    }
}

bool deck::removeFront(int &a){
    a = myArray[front];
    int b = front++;
    front = b;
    size--; //decreasing size after removed
};
bool deck::insertBack(int a){
    back = back +1 %cap;
    myArray[back] = a;
    size++; //Increasing size
};
bool deck::removeBack(int &a){};
std::ostream &operator<<(std::ostream &a, deck &aa){
    if(aa.getSize() != 0){
        for(int n=0;n<aa.getSize();n++){
            a << aa.getArray(n) << endl;
        }
    }else{
        a << "Empty" << endl;
    }
    return a;
}

int deck::getSize(){
    return size;
}

int deck::getArray(int a) {
    int b = myArray[a];
    return b;
}
#include "deck.h"


















































