#include <iostream>
#include "ListOfDoubles.h"

using namespace std;

int main() {
    ListOfDoubles list;
    ListOfDoubles list2;

    list.insert(10.5);
    list.insert(15.5);
    list.insert(20.5);
    list.insert(25.5);
    list.insert(30.5);
    list.displayList();

    cout << "\nDeleting most recent.\n";
    list.deleteMostRecent();
    list.displayList();

    cout << "\nDeleting position 2." << endl;
    list.deleteDouble(2);

    cout << "Running << operator.";
    cout << list << endl;

    //Copy Constructor
    cout << "Copy Constructor.";
    ListOfDoubles mylist(list);
    cout << mylist << endl;

    //An = assignment operator
    cout << "An = assignment operator";
    list2 = list;
    cout << list2 << endl;

    system("pause");
    return 0;
}