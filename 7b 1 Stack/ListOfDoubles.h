//
// Created by samir on 15/11/2015.
//

#ifndef UNTITLED3_LISTOFDOUBLES_H
#define UNTITLED3_LISTOFDOUBLES_H
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
};

#endif