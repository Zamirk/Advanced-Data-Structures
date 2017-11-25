
#include "EmployeeListNode.h"

EmployeeListNode::EmployeeListNode() {
    aaa.salary = 0;
    aaa.name = "";
}

EmployeeListNode::~EmployeeListNode() {
        //while (head){
        //    tempPtr = head;
        //    head = head -> next;
        //    delete tempPtr;
}

double EmployeeListNode::getSalary() {
    return aaa.salary;
}

string EmployeeListNode::getName() {
    return aaa.name;
}

void EmployeeListNode::setName(string a) {
    aaa.name = a;
}

void EmployeeListNode::setSalary(double a) {
    aaa.salary = a;
}

void EmployeeListNode::setNext(EmployeeListNode *a) {
    next = a;
}

EmployeeListNode* EmployeeListNode::getNext() {
    return next;
}