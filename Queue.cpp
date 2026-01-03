#include "Queue.h"
#include <iostream>

address createNewElm(infotype x) {
    address p = new elmQ;
    p->info = x;
    p->next = NULL;
    return p;
}

void createQueue(queue &Q) {
    Q.head = NULL;
    Q.tail = NULL;
}

void enqueue(queue &Q, address p) {
    if (Q.head == NULL) {
        Q.head = p;
        Q.tail = p;
    } else {
        Q.tail->next = p;
        Q.tail = p;
    }
}

void dequeue(queue &Q, address &p) {
    if (Q.head != NULL) {
        p = Q.head;
        Q.head = Q.head->next;
        if (Q.head == NULL) {
            Q.tail = NULL;
        }
        p->next = NULL;
    } else {
        p = NULL;
    }
}

void antriPrinter(queue &Q, infotype doc) {
    int count = 0;
    address q = Q.head;

    while (q != NULL) {
        if (q->info.namaPengguna == doc.namaPengguna) {
            count++;
        }
        q = q->next;
    }

    if (count < 3) {
        address p = createNewElm(doc);
        enqueue(Q, p);
    }
}

void simulasiCetak(queue &Q, int &kertas) {
    address p;

    while (Q.head != NULL) {
        if (Q.head->info.hal <= kertas) {
            kertas -= Q.head->info.hal;
            dequeue(Q, p);
            delete p;
        } else {
            break;
        }
    }
}