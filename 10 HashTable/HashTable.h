//X00110033

#ifndef UNTITLED21_HASHTABLE_H
#define UNTITLED21_HASHTABLE_H

#include <c++/array>
#include <iostream>
#include "BucketNode.h"

using namespace std;

class HashTable {
public:
    HashTable();
    ~HashTable();
    void insertItem(int a);
    void display();
    bool findStudent(int  a);
    void deleteStudent(int a);
private:
    BucketNode** myArray;
    int hSize;
    int mod = 47;
};


#endif //UNTITLED21_HASHTABLE_H
