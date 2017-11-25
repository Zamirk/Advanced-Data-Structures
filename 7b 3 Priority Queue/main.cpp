#include <iostream>
#include "PriorityQueue.h"
#include <iostream>       // std::cout
#include <queue>          // std::priority_queue
using namespace std;
#include <deque>
int main() {

    PriorityQueue myQueue;
    myQueue.push(2);
    myQueue.push(15);
    myQueue.push(9);
    myQueue.push(2);
    myQueue.push(12);


    cout << "The amount of doubles in the priority queue is " << myQueue.size() << "." << endl;
    cout << "The last value is " << myQueue.printTop() << endl;
    cout << "Popping data" << endl;
    myQueue.pop();
    cout << "The amount of doubles in the priority queue is " << myQueue.size() << "." << endl;
    cout << "The last value is " << myQueue.printTop() << endl;
    system("pause");
    return 0;
}