//X00110033
//Samir Kahvedzic

#include "StackOfDoubles.h"
#include <c++/iostream>
using namespace std;

StackOfDoubles::StackOfDoubles() { }
StackOfDoubles::~StackOfDoubles() { }

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

ListOfDoubles StackOfDoubles::getStack(){
    return stackOfNodes;
}

void StackOfDoubles::runDestructor() {
    stackOfNodes.~ListOfDoubles();
}

std::ostream &operator<<(std::ostream& str, StackOfDoubles &stackobj){
    ListOfDoubles aa = stackobj.getStack();
    Node *pointer = aa.getHead();

    if (pointer != NULL) {
        while (pointer != NULL) {    //While there are Nodes
            str << "-[" << pointer->getNumber() << "]-" ;
            pointer = pointer->getNext();
        }
    } else {
        cout << "Empty." << endl;
    }

    return str;
};
