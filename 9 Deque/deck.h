//X00110033
//Samir Kahvedzic

#ifndef UNTITLED20_DECK_H
#define UNTITLED20_DECK_H


class deck {
public:
    deck();
    deck(int a);
    ~deck();
    bool isEmpty();
    bool isFull();
    bool insertFront(int a);
    bool removeFront(int &a);
    bool insertBack(int a);
    bool removeBack(int &a);
    void display();
    int getSize();
    int getArray(int a);
private:
    int front, back, size, count, cap;

    int *myArray;
    bool full;
};
std::ostream &operator<<(std::ostream &a, deck &aa);

#endif //UNTITLED20_DECK_H
