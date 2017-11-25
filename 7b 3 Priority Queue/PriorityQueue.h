//X00110033
//Samir Kahvedzic

#ifndef UNTITLED8_QUEUEOFDOUBLES_H
#define UNTITLED8_QUEUEOFDOUBLES_H
#include <iostream>
#include <functional>
#include <queue>
#include <vector>
#include <list>


using namespace std;

class PriorityQueue {
public:
    PriorityQueue();
    ~PriorityQueue();
    void push(double a);
    void pop();
    int size();
    double printTop();
private:
    std::priority_queue<double> data;
};


#endif //UNTITLED8_QUEUEOFDOUBLES_H
