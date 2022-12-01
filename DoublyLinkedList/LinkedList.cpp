//
// Created by Turner on 11/30/22.
//

#include "LinkedList.h"


Node::Node(int value) {
    this->value = value; // assign value
    this->next = nullptr; // sets next to null
    this->previous = nullptr; // sets previous to null
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
    newNode->previous = tail;
    tail->next = newNode; // points the tail of the current node to newNode
    tail = newNode;       // sets the tail of newNode as newNode
    totalNodes++;
}

void LinkedList::prepend(int value) {
    Node *newNode = new Node(value);
    if(head == nullptr){   // list is empty, newNode is both head and tail of list
        newLinkedList(newNode);
        return;
    }
    newNode->next = head;
    head->previous = newNode;
    head = newNode;
    totalNodes++;
}

void LinkedList::insert(int value, int index) {
    // prepend if index is 0
    if(index == 0){
        prepend(value);
        return;
    }

    // append if index is adding to end of list
    if(index == totalNodes + 1){
        append(value);
        return;
    }

    // output error message if adding to area greater than totalNodes
    if (index > totalNodes + 1 || index < 0){
        cout << "index " << index << " out of bounds" << endl;
        return;
    }



    Node* curNode = head;
    Node* newNode = new Node(value);

    // find node right before index
    for(int i = 0; i < index - 1; i++){
        curNode = curNode->next;
    }
    newNode->next = curNode->next; // have newNode point towards the node at the index
    newNode->previous = curNode; // newNode points towards the previous
    curNode->next = newNode; // make the node right before index point towards newNode
    newNode->next->previous = newNode; // make newNode the previous node of the nextNode
    totalNodes++;
}

void LinkedList::remove(int index) {
    // output error message if adding to area greater than totalNodes
    if (index < 0 || index > totalNodes){
        cout << "index " << index << " out of bounds" << endl;
        return;
    }

    Node* curNode = head;
    Node* prevNode;
    Node* nextNode;

    if(index == 0){
        head = curNode->next;
        delete curNode;
        totalNodes--;
        return;
    }

    // find node at index
    for(int i = 0; i < index; i++){
        if(i < index){
            prevNode = curNode;   // prev
        }
        curNode = curNode->next;  // prev <-> cur
    }

    nextNode = curNode->next;    // prev <-> cur <-> next
    delete curNode;              // prev <-> ? <-> next
    prevNode->next = nextNode;   // prev -> next


    // run if nextNode is not a nullptr
    if(nextNode!= nullptr) {
        nextNode->previous = prevNode; // prev <-> next
    }

    totalNodes--;
}

void LinkedList::print() {
    Node* curNode = head;
    while (curNode != nullptr){
        cout << curNode->value << " ";
        curNode = curNode->next;
    }
}

void LinkedList::printReverse() {
    Node* curNode = tail;
    while (curNode != nullptr){
        cout << curNode->value << " ";
        curNode = curNode->previous;
    }
}


void LinkedList::removeAll() {
    // delete everything
    while(totalNodes > 0){
        remove(0);
        print();
        cout << endl;
    }
    cout << "empty list" << endl;
}



