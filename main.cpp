#include<iostream>
#include "linkedList.h"
using namespace std;

int main()
{
    LinkedList<int> L1;
    L1.insert(0,5);
    L1.insert(0,10);
    L1.insert(0,11);
    L1.insert(0,12);
    L1.push_back(1);
    L1.push_back(6);
    L1.push_back(3);
    L1.push_back(0);
    L1.push_back(1);
    L1.push_back(12);
    cout<<"maximo usando funcion iterativa: "<<L1.Maximum()<<'\n';
    cout<<"maximo usando funcion recursiva: "<<L1.recursiveMaximun()<<'\n';
    cout<<"funcion imprime datos de inicio a fin de manera recursiva\n";
    L1.recursivePrint();
    cout<<"funcion imprime datos de fin a inicio de manera recursiva\n";
    L1.reverseRecursivePrint();
    cout<<"funcion imprime datos de fin a inicio de manera iterativa\n";
    L1.reversePrint();
    L1.sortA();     //ordena de ascendente
    cout<<"Datos ordenados de manera ascendente\n";
    L1.print();
    cout<<"Datos ordenados de manera descendente\n";
    L1.sortD();     //ordena de descendente
    L1.print();
    cout<<"funcion usa Begin() y Next() para imprimir datos\n";
    L1.print2();
    cout<<"funcion usa Last() y Previus() para imprimir datos\n";
    L1.print3();

    // cout << "----------------------------- Lista 1 -----------------------------------" << endl;
    // LinkedList<int> L1;
    // L1.insert(0, 4);
    // L1.print();
    // L1.insert(0, 10);
    // L1.print();
    // L1.insert(L1.size() - 1, 25);
    // L1.print();
    // L1.insert(1, 5);
    // L1.print();
    // L1.reversePrint();
    
    // cout<<"El maximo valor es "<<L1.Maximum()<<endl;
    // cout<<"El numero de elementos pares es "<<L1.PairCount()<<endl;

    // L1.Begin();
    // cout<<"Cabeza de la lista: "<<L1.GetDato()<<endl;
    // L1.Last();
    // cout<<"Final de la lista: "<<L1.GetDato()<<endl;

    // cout << "\n----------------------------- Lista 2 -----------------------------------" << endl;
    // LinkedList<int> L2;
    // int n = 10;
    // while (n--) L2.insert(0, n);
    // L2.recursivePrint();
    // L2.reverseRecursivePrint();
    // L2.Begin();
    // cout << "Cabeza de la lista: " << L2.GetDato() << endl;
    // L2.Last();
    // cout << "Final de la lista: " << L2.GetDato() << endl;

    // L2.print2();
    // L2.print3();

    // cout <<"\n----------------------------- Lista 3 -----------------------------------"<<'\n';
    // LinkedList<int> L3;
    // L3.push_back(5);
    // L3.push_back(10);
    // L3.push_back(1);
    // L3.push_back(6);
    // L3.push_back(7);
    // L3.push_back(15);
    // L3.push_back(5);
    // L3.push_back(0);
    // L3.push_back(2);
    // L3.print();
    // L3.print2();
    // L3.print3();
    // L3.reversePrint();
    // L3.sortD();
    // L3.print();
    // L3.print2();
    // L3.print3();
    // L3.reversePrint();
    // cout<<L3.recursiveMaximun()<<'\n';
    // cout<<L3.Maximum()<<'\n';
    // L3.recursivePrint();
    // L3.reverseRecursivePrint();
}
