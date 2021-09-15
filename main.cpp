#include <bits/stdc++.h>
#include "linkedList.h"
using namespace std;
int main()
{
    LinkedList<int> L1;
    L1.insert(0,4);
    L1.print();
    L1.insert(0,10);
    L1.print();
    L1.insert(L1.size()-1,25);
    L1.print();
    L1.insert(1,5);
    L1.print();
    L1.reversePrint();

    LinkedList<int> L2;
    int n = 10;
    while(n--) L2.insert(0,n);
    L2.print();
    L2.reversePrint();
}