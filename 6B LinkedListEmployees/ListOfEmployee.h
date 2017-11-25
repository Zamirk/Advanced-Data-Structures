
#ifndef UNTITLED16_LISTOFEMPLOYEE_H
#define UNTITLED16_LISTOFEMPLOYEE_H

#include <iostream>
#include "EmployeeListNode.h"

using namespace std;

class ListOfEmployee {
private:
    EmployeeListNode *head;
public:
    ListOfEmployee();
    ~ListOfEmployee();
    void insert (string a, double b);
    void display();
    void deleteMostRecent();
    double getSalary(string name);
    EmployeeListNode* getHead();
    ListOfEmployee(const ListOfEmployee &obj);
    const ListOfEmployee & operator=(const ListOfEmployee & l);
};
std::ostream& operator << (std::ostream& stream, ListOfEmployee &a);

#endif //UNTITLED16_LISTOFEMPLOYEE_H
