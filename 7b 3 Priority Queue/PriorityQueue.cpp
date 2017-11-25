//X00110033
//Samir Kahvedzic

#include "PriorityQueue.h"
#include <iostream>
#include <functional>
#include <queue>
#include <vector>

PriorityQueue::PriorityQueue(){}
PriorityQueue::~PriorityQueue(){}

void PriorityQueue::pop() {
    data.pop();
}
void PriorityQueue::push(double a) {
    data.push(a);
}
int PriorityQueue::size(){
    return data.size();
}
double PriorityQueue::printTop(){
return data.top();
    }