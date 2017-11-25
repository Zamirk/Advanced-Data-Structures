#ifndef UNTITLED15_LISTOFDOUBLES_H
#define UNTITLED15_LISTOFDOUBLES_H

#include "Node.h"
#include <iostream>

class ListOfDoubles {
    friend class Node;
private:
    Node *head;     //Linked List Head, The start
public:
    ListOfDoubles();
    ~ListOfDoubles();

    void insert(double a);
    void displayList();
    double deleteMostRecent();
    double deleteDouble(int pos);
    Node * getHead();
    void setHead(Node* a);
    ListOfDoubles(const ListOfDoubles &obj);
    const ListOfDoubles & operator=(const ListOfDoubles & l);
};
std::ostream& operator <<(std::ostream& stream, ListOfDoubles& a);

#endif //UNTITLED15_LISTOFDOUBLES_H
