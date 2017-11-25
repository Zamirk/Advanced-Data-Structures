#include "ListOfDoubles.h"
#include <c++/iostream>

using namespace std;

ListOfDoubles::ListOfDoubles(){
    head = NULL;
}
ListOfDoubles::~ListOfDoubles(){
    if(head != NULL) {
            while (head != NULL) {
                Node *temp = head;
                head = head->getNext();              //New Head after first one is deleted
                delete temp;
                temp = NULL;
            }
    }else{
        cout << "\nAlready Destructed." << endl;
    }
};

std::ostream& operator <<(std::ostream& stream, ListOfDoubles& a){
    Node *pointer = a.getHead();            //A pointer that iterates along the list

    if (pointer != NULL) {
        while (pointer != NULL) {    //While there are Nodes
            stream << "-[" << pointer->getNumber() << "]-" ;
            pointer = pointer->getNext();
        }
    } else {
        stream << "Empty." << endl;
    }
    return stream;
}

void ListOfDoubles::insert(double a) {
    Node *myNode = new Node();      //Create a new Node
    myNode->setNumber(a);             //Setting the data in the Node

    if (head != NULL) {             //If the list is not empty
        Node *oldHead = head;       //Moving head
        head = myNode;              //Head points to newest node
        myNode->setNext(oldHead);   //Newest node points to next node(old head)
    } else {                        //If the list is empty
        head = myNode;              //Head pointing to very first node
        myNode->setNext(NULL);        //Next pointing to nothing, there is nothing next
    }
}

void ListOfDoubles::displayList() {
    Node *pointer = head;            //A pointer that iterates along the list
    cout << "Linked List: ";

    if (pointer != NULL) {
        while (pointer != NULL) {    //While there are Nodes
            cout << "-[" << pointer->getNumber() << "]-" ;
            pointer = pointer->getNext();
        }
    } else {
        cout << "Empty." << endl;
    }
}

double ListOfDoubles::deleteMostRecent() {      //Deletes a node, then returns the value deleted
    double number = 0;
    if (head != NULL) {
        Node *temp = head;
        head = head->getNext();              //New Head after first one is deleted
        number = temp->getNumber();          //Getting return value
        delete temp;
        temp = NULL;
    } else {
        cout << "Empty." << endl;
    }
    return number;
}

double ListOfDoubles::deleteDouble(int pos) {
    double number = 0;
    Node *temp1 = head;

    if(head != NULL){
        if (pos == 1){
            deleteMostRecent();
        }

        for(int i=0;i<pos-2;i++) {
            temp1 = temp1->getNext();
        }

        Node *temp2 = temp1->getNext();
        temp1->setNext(temp2->getNext());
        number = temp2->getNumber();
        delete temp2;
    }else{
        cout << "empty";
    }
    return number;
}

Node* ListOfDoubles::getHead() {
    return head;
}

void ListOfDoubles::setHead(Node *a) {
    head = a;
}

ListOfDoubles::ListOfDoubles(const ListOfDoubles &obj) { // copy constructor
    head = NULL;
    *this = obj; // uses operloaded = operator
}

const ListOfDoubles & ListOfDoubles::operator=(const ListOfDoubles & l) { // operloaded = operator
    if (this != &l) { // check for self assignment
        if (head != NULL) { // free memory of lhs
            while (head)
                deleteMostRecent();
        } //endif

        Node *origPtr = l.head;
        Node *iterator = NULL;

        while (origPtr != NULL) {
            Node *myNode = new Node();
            myNode -> setNumber(origPtr -> getNumber());
            myNode -> setNext(NULL);

            if (head == NULL) {
                head = myNode;
                iterator = myNode;
            }else{
                iterator -> setNext(myNode);
                iterator = iterator -> getNext();
            } //endifelse
            origPtr = origPtr -> getNext();
        } // endwhile
    } // endif
    return *this;
}
