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

public:
    LinkedList();
    explicit LinkedList(int value);
    void append(int value);
    void print();
};


#endif //LINKEDLISTIMPLEMENTATION_LINKEDLIST_H
