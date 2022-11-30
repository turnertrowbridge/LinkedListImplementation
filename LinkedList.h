//
// Created by Turner on 11/30/22.
//

#ifndef LINKEDLISTIMPLEMENTATION_LINKEDLIST_H
#define LINKEDLISTIMPLEMENTATION_LINKEDLIST_H

class Node {
private:
    int value;
    Node *next;
public:
    explicit Node(int value);
};

class LinkedList {
private:
    Node *head;
    Node *tail;
    int totalNodes;

public:
    LinkedList();
    explicit LinkedList(int value);
};


#endif //LINKEDLISTIMPLEMENTATION_LINKEDLIST_H
