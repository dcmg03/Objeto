//
// Created by Deisy Monroy on 10/11/2021.
//

#include <iostream>
#include "LinkedList.cpp"

using namespace std;

int main() {

    LinkedList<string> *linkFirst = new LinkedList<string>();
    LinkedList<string> *linkLast = new LinkedList<string>();

    //D-C-B-A

    linkFirst->addNodeFirst("hola hahahaha");
    linkFirst->addNodeFirst("B");
    linkFirst->addNodeFirst("C");
    linkFirst->addNodeFirst("D");

    //A-B-C-D
    linkLast->addNodeLast("A");
    linkLast->addNodeLast("B");
    linkLast->addNodeLast("C");
    linkLast->addNodeLast("D");
    char opc = 0;
    cout <<"1. Agregar al inicio \n"<<"2. Agregar al final \n"<<"3. Buscar nodo \n"<<"4. Buscar puerta \n"<<"5.Insetar antes nodo\n"<<"6.Insertar despues nodo";
    cout<<opc;
    switch (opc != 7) {

        case 1:
            const std::string libro = "";
            cout<<"Digite libro a agregar";
            cout<<libro;

            linkFirst->addNodeFirst(libro);

    }
    for (string val: linkFirst->getLinkedList()) {
        cout << val << "-";
    }

    cout << endl;

    for (string val: linkLast->getLinkedList()) {
        cout << val << "-";
    }

    cout << endl;

    delete (linkFirst);

    delete (linkLast);


    return EXIT_SUCCESS;
}
