//
// Created by Deisy Monroy on 10/11/2021.
//


#ifndef EXAMPLECPP_LINKEDLIST_H
#define EXAMPLECPP_LINKEDLIST_H

#include <vector>
#include "Node.h"

template <class T>
class LinkedList {
public:

    LinkedList();

    bool isEmpty();

    void addNodeFirst( T );

    void addNodeLast( T );

    std::vector<T> getLinkedList();

    virtual ~LinkedList();

private:
    Node<T>* head;
};

#endif //EXAMPLECPP_LINKEDLIST_H