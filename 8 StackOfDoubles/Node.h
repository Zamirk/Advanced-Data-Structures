#ifndef UNTITLED15_NODE_H
#define UNTITLED15_NODE_H

class Node {
    //Allows accessing of private/protected members
    friend class ListOfDoubles;
    friend class main;
private:
    double number;
    Node *next;
public:
    Node();     //Constructor
    ~Node();    //Destructor
    double getNumber();
    Node* getNext();
    void setNumber(double a);
    void setNext(Node* a);
};


#endif //UNTITLED15_NODE_H
