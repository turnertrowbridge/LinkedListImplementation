#include <iostream>
#include "LinkedList.h"

using namespace std;

int main() {
    LinkedList myLinkedList;
    myLinkedList.append(5);
    myLinkedList.append(20);
    myLinkedList.append(1);
    myLinkedList.append(7);
    myLinkedList.print();


    return 0;
}
