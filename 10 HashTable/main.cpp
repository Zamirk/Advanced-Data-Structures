#include <iostream>
#include "HashTable.h"

using namespace std;

int main() {
    cout << "Hello, World!" << endl;

    HashTable myTable;
    myTable.insertItem(10);

    myTable.insertItem(50);
    myTable.insertItem(40);
    myTable.insertItem(30);
    myTable.insertItem(20);
    myTable.insertItem(10);
    myTable.insertItem(5);

    cout << "Displaying table" << endl;
    myTable.display();

    cout << "Finding student with id 50" << endl;
    std::cout << std::boolalpha << "Found: " << myTable.findStudent(50) << endl;


    system("pause");
    return 0;
}