#include "Node.h"

Node::Node() {}
Node::~Node(){}

Node* Node::getNext() {
    return next;
}

double Node::getNumber() {
    return number;
}

void Node::setNext(Node *a) {
    next = a;
}

void Node::setNumber(double a) {
    number = a;
}