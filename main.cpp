#include<iostream>
#include "linkedList.h"
using namespace std;
int main()
{
    cout << "----------------------------- Lista 1 -----------------------------------" << endl;
    LinkedList<int> L1;
    L1.insert(0, 4);
    L1.print();
    L1.insert(0, 10);
    L1.print();
    L1.insert(L1.size() - 1, 25);
    L1.print();
    L1.insert(1, 5);
    L1.print();
    L1.reversePrint();

    L1.Begin();
    cout<<"Cabeza de la lista: "<<L1.GetDato()<<endl;
    L1.Last();
    cout<<"Final de la lista: "<<L1.GetDato()<<endl;

    cout << "\n----------------------------- Lista 2 -----------------------------------" << endl;
    LinkedList<int> L2;
    int n = 10;
    while (n--) L2.insert(0, n);
    L2.print();
    L2.reversePrint();
    L2.Begin();
    cout << "Cabeza de la lista: " << L2.GetDato() << endl;
    L2.Last();
    cout << "Final de la lista: " << L2.GetDato() << endl;
}
