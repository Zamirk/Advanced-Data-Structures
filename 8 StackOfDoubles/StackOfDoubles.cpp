//X00110033
//Samir Kahvedzic

#include "StackOfDoubles.h"
#include "ListOfDoubles.h"
#include <c++/iostream>
using namespace std;

StackOfDoubles::StackOfDoubles() { }
StackOfDoubles::~StackOfDoubles() {

}

void StackOfDoubles::push(double a) {
    stackOfNodes.insert(a);
}
void StackOfDoubles::pop(){
    stackOfNodes.deleteMostRecent();
}
double StackOfDoubles::top(){
    Node *pointer = stackOfNodes.getHead();            //A pointer that iterates along the list
    double a = 0;
    if (pointer != NULL) {
        a = pointer->getNumber();
    } else {
        cout << "Empty." << endl;
    }
    return a;
}
void StackOfDoubles::print(){
    stackOfNodes.displayList();
}
void StackOfDoubles::setStack(ListOfDoubles a) {
    stackOfNodes = a;
}
ListOfDoubles StackOfDoubles::getStack(){
    return stackOfNodes;
}

std::ostream &operator<<(std::ostream& str, StackOfDoubles &stackobj) {
    ListOfDoubles aa = stackobj.getStack();
    Node *pointer = aa.getHead();

    if (pointer != NULL) {
        while (pointer != NULL) {    //While there are Nodes
            str << "-[" << pointer->getNumber() << "]-";
            pointer = pointer->getNext();
        }
    } else {
        cout << "Empty." << endl;
    }

    return str;
}

StackOfDoubles::StackOfDoubles(StackOfDoubles &obj) { // copy constructor
    stackOfNodes.setHead(NULL);
    *this = obj; // uses operloaded = operator
}

StackOfDoubles & StackOfDoubles::operator=(StackOfDoubles & rhs) {
    if (this != &rhs) {
        stackOfNodes = rhs.getStack();
        //Reusing code from ListOfDoubles
    }
    return *this;
}