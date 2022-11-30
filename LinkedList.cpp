//
// Created by Turner on 11/30/22.
//

#include "LinkedList.h"

Node::Node(int value) {
    this->value = value; // assign value
    this->next = nullptr; // link node to next node
}

LinkedList::LinkedList() {
    head = nullptr;
    tail = nullptr;
    totalNodes = 0;
}

LinkedList::LinkedList(int value) {
    head = new Node(value);
    tail = new Node(value);
    totalNodes = 1;
}

