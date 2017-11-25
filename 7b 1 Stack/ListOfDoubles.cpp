
#include "ListOfDoubles.h"
#include <c++/iostream>

using namespace std;

    ListOfDoubles::ListOfDoubles(){
        head = NULL;
    }
    ListOfDoubles::~ListOfDoubles(){
        //Page 16
        if(head != NULL) {
            while (head != NULL) {
                deleteMostRecent();
                head = head->getNext();
                //cout << "d";
            }
        }else{
            cout << "Empty";
        }
    };

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
    int count = 0;
    Node *iterator = head;

    //Node *tee = NULL;
    //tee = head;
    //cout << ""<< tee << endl;
    //cout << ""<< head << endl;

    while (iterator != NULL) {       //While there are Nodes left
        //tee = tee->next;
        //cout << tee;
            if(count == pos-1){
                if(pos == 1) {
                    //Node *tempPtr = head;
                    head = iterator -> next;
                    //delete tempPtr;
                }else if(pos == 2) {
                    head -> next = iterator -> next;
                }else if(pos == 3) {
                    head -> next -> next = iterator -> next;
                }else if(pos == 4) {
                    head -> next -> next -> next = iterator -> next;
                }else if(pos == 5) {
                    head -> next -> next -> next -> next = iterator -> next;
                }
            }else{
                iterator = iterator->next;
            }
        count++;
        }
    return number;
}

Node* ListOfDoubles::getHead() {
    return head;
}

void ListOfDoubles::setHead(Node *a) {
    head = a;
}


