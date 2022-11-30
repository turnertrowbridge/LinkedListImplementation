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
    totalNodes++;
}

void LinkedList::append(int value) {
    Node* newNode = new Node(value);

    if(head == nullptr){   // list is empty, newNode is both head and tail of list
        head = newNode;
        tail = newNode;
        totalNodes++;
        return;
    }

    tail->next = newNode; // points the tail of the current node to newNode
    tail = newNode; // sets the tail of newNode as newNode
    totalNodes++;
}

void LinkedList::print() {
    Node* curNode = head;
    for(int i = 0; i < totalNodes; i++){
        cout << curNode->value << " ";
        curNode = curNode->next;
    }

}

