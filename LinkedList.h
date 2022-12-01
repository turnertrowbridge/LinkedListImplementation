//
// Created by Turner on 11/30/22.
//

#ifndef LINKEDLISTIMPLEMENTATION_LINKEDLIST_H
#define LINKEDLISTIMPLEMENTATION_LINKEDLIST_H

#include <iostream>
using namespace std;

class Node {
public:
    int value;
    explicit Node(int value);
    Node *next;
};

class LinkedList {
private:
    Node *head;
    Node *tail;
    int totalNodes;
    void newLinkedList(Node* newNode);

public:
    LinkedList();
    void append(int value);
    void prepend(int value);
    void insert(int value, int index);
    void remove(int index);
    void print();
    void removeAll();
};


#endif //LINKEDLISTIMPLEMENTATION_LINKEDLIST_H
