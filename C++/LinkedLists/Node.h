#ifndef NODE_H_
#define NODE_H_
/* General Node Classes for use in C++ Data Structures */

// Singly Linked List Node
class Node {
    protected:
    int data;

    public:
        Node (int n) : data(n) {}
        ~Node () {} 
        int getData() {
            return data;
        }
};

class SLLN : public Node {
    public:
        SLLN * next;
        SLLN (int n) : Node(n) {}
        ~SLLN () {}
        SLLN * getNext() { return next; }
};

// Doubly Linked List Node
class DLLN : public SLLN {
    DLLN *prev;    
};

// Binary Tree Node
class BTN : public Node {
    BTN * left;
    BTN * right;
};

// Trinary Tree Node
class TTN : public BTN {
    TTN * mid;
};

#endif
