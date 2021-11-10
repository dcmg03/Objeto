//
// Created by Deisy Monroy on 10/11/2021.
//
#ifndef EXAMPLECPP_NODE_H
#define EXAMPLECPP_NODE_H

#include <cstdlib>

template <class T> class LinkedList;

template <class T>
class Node {

    friend class LinkedList<T>;

public:
    Node(T info) : info(info) {
        next = NULL;
    }

    virtual ~Node() {

    }

private:
    T info;
    Node<T>* next;
};


#endif //EXAMPLECPP_NODE_H