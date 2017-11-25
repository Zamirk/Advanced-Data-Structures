
#include "StackOfDoubles.h"

using namespace std;
int main() {
    StackOfDoubles myStack;
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

    cout << "Top, returning top value which is ";
    cout << myStack.top();

    cout << "\nPrinting Stack with overloaded operater." << endl;

    cout << myStack << endl;
    cout << "\nRunning Destructor." << endl;
    //myStack.runDestructor();

    return 0;
}

