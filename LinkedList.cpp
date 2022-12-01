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

void LinkedList::newLinkedList(Node* newNode) {
    head = newNode;
    tail = newNode;
    totalNodes++;
}

void LinkedList::append(int value) {
    Node *newNode = new Node(value);

    if(head == nullptr){
        newLinkedList(newNode);
        return;
    }

    tail->next = newNode; // points the tail of the current node to newNode
    tail = newNode; // sets the tail of newNode as newNode
    totalNodes++;
}

void LinkedList::prepend(int value) {
    Node *newNode = new Node(value);
    if(head == nullptr){   // list is empty, newNode is both head and tail of list
        newLinkedList(newNode);
        return;
    }
    newNode->next = head;
    head = newNode;
    totalNodes++;
}

void LinkedList::print() {
    Node* curNode = head;
    for(int i = 0; i < totalNodes; i++){
        cout << curNode->value << " ";
        curNode = curNode->next;
    }

}



