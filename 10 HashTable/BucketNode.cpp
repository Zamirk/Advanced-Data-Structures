//X00110033

#include "BucketNode.h"

BucketNode::BucketNode(int a){
    studentNumber = a;
    next = NULL;
};

void BucketNode::setNext(BucketNode *a) {
    next = a;
}
void BucketNode::setNum(int a) {
    studentNumber = a;
}
BucketNode* BucketNode::getNext() {
    return next;
}
int BucketNode::getNum(int a) {
    return studentNumber;
}