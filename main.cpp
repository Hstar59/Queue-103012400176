#include <iostream>
#include "Queue.h"

using namespace std;

int main() {
    queue Q;
    createQueue(Q);

    infotype d1 = {"Dok1", "Andi", 5};
    infotype d2 = {"Dok2", "Andi", 10};
    infotype d3 = {"Dok3", "Andi", 3};
    infotype d4 = {"Dok4", "Andi", 7};

    antriPrinter(Q, d1);
    antriPrinter(Q, d2);
    antriPrinter(Q, d3);
    antriPrinter(Q, d4);

    int kertas = 20;
    simulasiCetak(Q, kertas);

    cout << "Sisa kertas: " << kertas << endl;

    return 0;
}