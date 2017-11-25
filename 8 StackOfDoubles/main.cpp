#include <iostream>
#include "ListOfDoubles.h"
#include "StackOfDoubles.h"

using namespace std;

int main() {
    StackOfDoubles myStack, myOtherStack;
    myStack.push(10);
    myStack.push(8.5);
    myStack.push(6);
    myStack.push(3.5);
    myStack.push(6.5);
    myStack.push(15.5);

    cout << "Your stack" << endl;
    myStack.print();

    cout << "\nPop, removing top value." << endl;
    myStack.pop();

    cout << "\nCopy Constructor";
    StackOfDoubles stack(myStack);
    cout << stack << endl;

    cout << "Overloaded = operator." << endl;
    myOtherStack = myStack;
    cout << myOtherStack << endl;

    system("pause");
    return 0;
}