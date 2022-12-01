#include <iostream>
#include "LinkedList.h"

using namespace std;

int main() {
    LinkedList myLinkedList;
    myLinkedList.append(1);                 // 1
    myLinkedList.append(2);                 // 1 2
    myLinkedList.append(3);                 // 1 2 3
    myLinkedList.append(4);                 // 1 2 3 4
    myLinkedList.prepend(5);                // 5 1 2 3 4
    myLinkedList.append(6);                 // 5 1 2 3 4 6
    myLinkedList.prepend(7);                // 7 5 1 2 3 4 6
    myLinkedList.prepend(8);                // 8 7 5 1 2 3 4 6
    myLinkedList.insert(9, 2);        // 8 7 9 5 1 2 3 4 6
    myLinkedList.insert(10, 0);       // 10 8 7 9 5 1 2 3 4 6
    myLinkedList.insert(11, 11);      // 10 8 7 9 5 1 2 3 4 6 11
    myLinkedList.insert(12, 50);      // outputs error message, not added
    myLinkedList.insert(8, -8);      // outputs error message, not added
    myLinkedList.print();     // expected output  10 8 7 9 5 1 2 3 4 6 11

    cout << endl << endl;

    myLinkedList.remove(0); // 8 7 9 5 1 2 3 4 6 11
    myLinkedList.remove(-1); // 8 7 9 5 1 2 3 4 6 11
    myLinkedList.remove(20); // outputs error, nothing removed
    myLinkedList.remove(5); // 8 7 5 1 3 4 6 11
    myLinkedList.remove(8); // 8 7 5 1 3 4 6
    myLinkedList.print();     // expected output  8 7 5 1 3 4 6
    cout << endl;

    myLinkedList.removeAll(); // removes all nodes (console outputs each removal in loop)
    myLinkedList.print();     // expected output





    return 0;
}
