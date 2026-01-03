#ifndef QUEUE_H
#define QUEUE_H

#include <string>

using namespace std;

struct infotype {
    string namaDok;
    string namaPengguna;
    int hal;
};

struct elmQ;
typedef elmQ* address;

struct elmQ {
    infotype info;
    address next;
};

struct queue {
    address head;
    address tail;
};

address createNewElm(infotype x);
void createQueue(queue &Q);
void enqueue(queue &Q, address p);
void dequeue(queue &Q, address &p);
void antriPrinter(queue &Q, infotype doc);
void simulasiCetak(queue &Q, int &kertas);

#endif