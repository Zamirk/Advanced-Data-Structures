//X00110033
//Samir Kahvedzic

#ifndef UNTITLED7_STACKOFDOUBLES_H
#define UNTITLED7_STACKOFDOUBLES_H

#include "ListOfDoubles.h"

class StackOfDoubles {
public:
    StackOfDoubles();
    ~StackOfDoubles();
    void push(double a);    //Pushes a double onto stack
    void pop();
    double top();
    void print();
    ListOfDoubles getStack();
    void runDestructor();
private:
    ListOfDoubles stackOfNodes;
};
std::ostream & operator<<(std::ostream& str, StackOfDoubles &stackobj);

#endif //UNTITLED7_STACKOFDOUBLES_H
