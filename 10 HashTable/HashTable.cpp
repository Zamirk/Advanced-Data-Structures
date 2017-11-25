//X00110033
//http://www.cprogramming.com/snippets/source-code/hash-table-in-cplusplus

#include "HashTable.h"

HashTable::HashTable() {
    hSize = 0;
    myArray = new BucketNode*[50];
    for(int n=0; n<50; n++) {
        myArray[n] = NULL;
    }
}
HashTable::~HashTable() {
        delete[] myArray;
    }

void HashTable::insertItem(int a){
        BucketNode *newNode = new BucketNode(a);
        cout << a << endl;
        //int pos = a % mod;
        //cout << "pos " << mod << endl;
        hSize++;
    };

void HashTable::display() {
    for (int n=0; n < hSize; n++) {
        cout << "Item :" << n << "---" << myArray[n] << endl;
    }
}

bool HashTable::findStudent(int  a){
    cout << "Found student with " << a << endl;
    cout << "Did not find student with " << a << endl;
    return true;
};
void HashTable::deleteStudent(int a){
    if(findStudent(a)==true){
        cout << "Deleting student" << endl;
    }
};