#include "Globals.h"
#include "Node.h"
#include "LinkedList.h"

using namespace std;

int SLL::isEmpty() {
    if (getCount() == 0) {
        cout << "Empty List" << endl;
        return 1;
    }
    return 0;
}
int SLL::insertAtHead(int n) {
    if (!getCount()) {
        SLLN * node = new SLLN(n);
        head = node;
        tail = node;
        count++;
        cout << "added node at head" << endl;
        return 1;
    }
    else {
        SLLN * next = head;
        SLLN * node = new SLLN(n);
        node->next = next;
        head = node;
        cout << "added node at head" << endl;
        count++;
        return 1;
    }
    return 0;
}
int SLL::insertAtTail(int n) {
    if (!getCount()) {
        SLLN * node = new SLLN(n);
        head = node;
        tail = node;
        count++;
        cout << "added node at tail" << endl;
        return 1;
    }
    else {
        SLLN * node = new SLLN(n);
        tail->next = node;
        tail = node;
        cout << "added node at tail" << endl;
        count++;
        return 1;
    }
    return 0;
}

void SLL::print() {
    if (isEmpty()) {
        cout << "empty list" << endl;
    }
    else {
        cout << "Nodes: " << getCount() << endl;
        SLLN * node = head;
        while (node) {
            cout << node->getData() << endl;
            node = node->getNext();
        }
    }
}

int main (){
    SLL * sll = new SLL();
    sll->insertAtHead(3);
    sll->insertAtHead(4);
    sll->print();
    sll->insertAtHead(10);
    sll->insertAtTail(5);
    sll->print();
    return 0;
}
