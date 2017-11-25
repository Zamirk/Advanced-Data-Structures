//X00110033
//Samir Kahvedzic

#include "QueueOfDoubles.h"
#include <iostream>
#include <queue>

QueueOfDoubles::QueueOfDoubles(){}
QueueOfDoubles::~QueueOfDoubles(){}

void QueueOfDoubles::pop() {
    data.pop_back();
}
void QueueOfDoubles::push(double a) {
    data.push_back(a);
}
double QueueOfDoubles::back() {
    return data.back();
}
double QueueOfDoubles::front() {
    return data.front();
}
void QueueOfDoubles::print() {
    //Creating an iterator, to get the data.
    std::list<double>::iterator it = data.begin();
    for( int a=0;a<data.size();a++){
         cout << "Number " << a+1 << ": [" << *it << "]" << endl;
        it++;
    }
}
int QueueOfDoubles::size(){
    return data.size();
}