#include <iostream>
#include "ListOfEmployee.h"

using namespace std;

int main() {
    ListOfEmployee list, list2;
    list.insert("Samir",10000);
    list.insert("Damir",20000);
    list.insert("Zamir",30000);

    //Using overloaded <<
    cout << list;

    cout << "\nDeleting most recent." << endl;
    list.deleteMostRecent();
    list.display();

    //Viewing Salary of Samir
    cout << "Samir's salary is " << list.getSalary("Samir") << endl;

    //Copy Constructor
    cout << "Displaying Copy" << endl;
    ListOfEmployee copy(list);
    cout << copy;

    //An = assignment operator
    cout << "An = assignment operator" << endl;
    list2 = list;
    cout << list2;
    //Destructing
    //copy.~ListOfEmployee();
    //list.~ListOfEmployee();
    //list2.~ListOfEmployee();

    system("pause");
    return 0;
}