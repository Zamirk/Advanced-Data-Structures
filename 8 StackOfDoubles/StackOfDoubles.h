//X00110033
//Samir Kahvedzic

#ifndef UNTITLED15_STACKOFDOUBLES_H
#define UNTITLED15_STACKOFDOUBLES_H

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
    StackOfDoubles(StackOfDoubles &obj);
    void setStack(ListOfDoubles a);
    StackOfDoubles & operator=(StackOfDoubles & rhs);
    ListOfDoubles stackOfNodes;
};
std::ostream & operator<<(std::ostream& str, StackOfDoubles &stackobj);

#endif //UNTITLED15_STACKOFDOUBLES_H

