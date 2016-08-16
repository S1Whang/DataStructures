#ifndef LINKEDLIST_H_
#define LINKEDLIST_H_

/* Singly Linked List : Node List Starts From Head */ 
class SLL {
    private:
        SLLN * head;
        SLLN * tail;
        int count;
    public:
        SLL() : head(NULL), tail (NULL), count (0) {}
        ~SLL() {}
        int getCount() { return count; }
        int isEmpty();
        SLLN * getHead() { return head; };
        SLLN * getTail() { return tail; };
        int insertAtHead(int n);
        int insertAtTail(int n);
        void print();
    // TODO
};

/* Doubly Linked List : Node List Starts From Head or Tail */
class DLL {
    private:
        DLLN * head;
        DLLN * tail;
        int count;
    public:
        DLL() : head(NULL), tail(NULL), count (0) {}
        ~DLL() {}
        int isEmpty();
        int getCount() { return count; }
        int insertAtN(int n);
        int insertAtHead(int n);
        int insertAtTail(int n);
    // TODO
};

/* Circular Linked List : Node List Starts From Head or Tail */
class CLL {
    private:
    DLLN * head;
    DLLN * tail;
    public:
    // TODO
};
#endif
