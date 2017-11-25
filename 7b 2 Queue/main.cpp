#include <iostream>
#include "QueueOfDoubles.h"
using namespace std;

int main() {
    QueueOfDoubles myQueue;
    myQueue.push(8);
    myQueue.push(4);
    myQueue.push(2);
    myQueue.push(1);
    myQueue.push(9);

    myQueue.print();

    cout << "The amount of doubles in the queue is " << myQueue.size() << "." << endl;
    cout << "The front element is " << myQueue.front() << endl;
    cout << "The back element is " << myQueue.back() << endl;

    cout << "Popping data" << endl;
    myQueue.pop();

    myQueue.print();
    system("pause");
    return 0;
}