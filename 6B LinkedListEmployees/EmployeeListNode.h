
#ifndef UNTITLED16_EMPLOYEELISTNODE_H
#define UNTITLED16_EMPLOYEELISTNODE_H

#include <c++/array>

using namespace std;

class EmployeeListNode {
public:
    EmployeeListNode();
    ~EmployeeListNode();
    void setName(string a);
    void setSalary(double a);
    string getName();
    double getSalary();
    EmployeeListNode* getNext();
    void setNext(EmployeeListNode* a);
    struct Employee{
        string name;
        double salary;
    };

private:
    EmployeeListNode *next;
    Employee aaa;
};


#endif //UNTITLED16_EMPLOYEELISTNODE_H
