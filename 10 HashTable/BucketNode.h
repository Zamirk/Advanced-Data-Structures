//X00110033

#ifndef UNTITLED21_BUCKETNODE_H
#define UNTITLED21_BUCKETNODE_H

#include <c++/array>
#include <iostream>

using namespace std;

class BucketNode {
public:
    BucketNode(int a);
    BucketNode *getNext();
    void setNext(BucketNode *a);
    int getNum(int a);
    void setNum(int a);
private:
    int studentNumber;
    BucketNode *next;
};


#endif //UNTITLED21_BUCKETNODE_H
