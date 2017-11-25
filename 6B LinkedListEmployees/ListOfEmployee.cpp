#include "ListOfEmployee.h"

ListOfEmployee::ListOfEmployee() {
    head = NULL;
}

ListOfEmployee::~ListOfEmployee() {
    if(head != NULL) {
        while (head) {
        deleteMostRecent();
        }
    }else{
        cout << "\nDestructed Already!" << endl;
    }
}

void ListOfEmployee::deleteMostRecent() {
    if (head != NULL) {
        EmployeeListNode *temp = head;
        head = head -> getNext();              //New Head after first one is deleted
        delete temp;
        temp = NULL;
    } else {
        cout << "Empty." << endl;
    }
}
void ListOfEmployee::display(){
    EmployeeListNode *pointer = head;

    if (pointer != NULL){
        cout << "\t-Name-\t-Salary-" << endl;
        while (pointer != NULL){
            cout << "\t" << pointer -> getName();
            cout << "\t" << pointer -> getSalary() << endl;

            pointer = pointer->getNext();
        }
    } else {
        cout << "Empty" << endl;
    }
}
double ListOfEmployee::getSalary(string name) {
    double salary = 0;
    EmployeeListNode *pointer = head;
    if (pointer != NULL){
        while (pointer != NULL){
            if(pointer -> getName() == name){
                salary = pointer -> getSalary();
            }
            pointer = pointer-> getNext();
        }
    } else {
        cout << "Empty" << endl;
    }
    return salary;
}
void ListOfEmployee::insert(string a, double b) {
    EmployeeListNode *myNode = new EmployeeListNode;
    myNode->setSalary(b);
    myNode->setName(a);

    if (head != NULL){
        EmployeeListNode *oldHead = head;
        head = myNode;
        myNode->setNext(oldHead);
    } else {
        head = myNode;
        myNode->setNext(NULL);
    }
}
EmployeeListNode* ListOfEmployee::getHead() {
    return head;
}

std::ostream& operator << (std::ostream& stream, ListOfEmployee &a){
    EmployeeListNode *pointer = a.getHead();

    if (pointer != NULL){
        stream << "\t-Name-\t-Salary-" << endl;
        while (pointer != NULL){
            stream << "\t" << pointer -> getName();
            stream << "\t" << pointer -> getSalary() << endl;

            pointer = pointer->getNext();
        }
    } else {
        stream << "Empty" << endl;
    }
    return stream;
}

ListOfEmployee::ListOfEmployee(const ListOfEmployee &obj) { // copy constructor
    head = NULL;
    *this = obj; // uses operloaded = operator
}

const ListOfEmployee & ListOfEmployee::operator=(const ListOfEmployee & l) { // operloaded = operator
    if (this != &l) { // check for self assignment
        if (head != NULL) { // free memory of lhs
            while (head)
                deleteMostRecent();
        } //endif

        EmployeeListNode *origPtr = l.head;
        EmployeeListNode *iterator = NULL;

        while (origPtr != NULL) {
            EmployeeListNode *Node = new EmployeeListNode();
            Node -> setName(origPtr -> getName());
            Node -> setSalary(origPtr -> getSalary());
            Node -> setNext(NULL);

            if (head == NULL) {
                head = Node;
                iterator = Node;
            }else{
                iterator -> setNext(Node);
                iterator = iterator -> getNext();
            } //endifelse
            origPtr = origPtr -> getNext();
        } // endwhile
    } // endif
    return *this;
}