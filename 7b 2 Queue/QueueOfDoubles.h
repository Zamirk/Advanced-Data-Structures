//X00110033
//Samir Kahvedzic

#ifndef UNTITLED8_QUEUEOFDOUBLES_H
#define UNTITLED8_QUEUEOFDOUBLES_H
#include <iostream>
#include <vector>
#include <list>

using namespace std;

class QueueOfDoubles {
public:
    QueueOfDoubles();
    ~QueueOfDoubles();
    void print();
    void push(double a);
    void pop();
    double front();
    double back();
    int size();
private:
    list<double> data;
};


#endif //UNTITLED8_QUEUEOFDOUBLES_H
