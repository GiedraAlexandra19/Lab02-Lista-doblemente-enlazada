#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include "node.h"
#include <iostream>

template<typename T>
class LinkedList{
    private:
        Node<T>* pHead;
        Node<T>* pTail;
        Node<T>* pActual;
        int _size;
    public:
        LinkedList() :pHead(nullptr), pTail(nullptr), pActual(nullptr), _size(0) {}
        LinkedList(int, T);
        ~LinkedList();
        int size() { return _size; }
        void push_back(T);
        void push_front(T);
        Node<T>* get(int);
        void insert(int, T);
        void Begin();
        void Last();
        void Next();
        void Previus();
        T GetDato();
        void print();
        void reversePrint();
        int Maximum();
        int RMaximum(Node<T>*);
        void Rprint(Node<T>*);
        void reverseRPrint(Node<T>*);
        int PairCount();

    /*
    1. Implementar una función maximo de manera iterativa.                          (jesus)
    2. Implementar una función maximo de forma recursiva.                           (jesus)
    3. Implementar una función recursiva que imprima los datos de inicio a fin.     (jesus)
    4. Implementar una función recursiva que imprima los datos de fin a inicio.     (jesus)
    5. Implementar una función iterativa que imprima los datos de fin a inicio.     (alejandro)
    6. Implementar una función que cuente el número de elementos pares.  ́           (jesus)
    7. Implementar una función que ordene los datos de forma ascendente.            (alejandro)
    8. Implementar una función que ordene los datos de forma descendente.           (alejandro)
    9. Añadir un miembro dato/variable a la lista denominado pActual (puntero a nodo) y crear
        las siguientes funciones:
 
    15. Usando las funciones, Begin y Next implemente una función para imprimir los datas de            (alejandro)
        la lista.
    16. Usando las funciones, Last y Previus implemente una función para imprimir los datas de          (alejandro)
        la lista.
    */
};

template<typename T>
LinkedList<T>::LinkedList(int size, T value){
    _size = 0;
    while (size--) push_back(value);
}

template<typename T>
LinkedList<T>::~LinkedList(){
    Node<T>* tmp = pHead;
    while (tmp){
        tmp = pHead->getNext();
        delete pHead;
        pHead = tmp;
    }
}

template<typename T>
void LinkedList<T>::push_back(T value){
    Node<T>* nodo = new Node<T>(value);
    if (!pHead){                        //si esta vacio
        pHead = nodo;                   //nuevo head
        pTail = pHead;                  //nuevo tail
    }
    else{                               //si hay al menos un elemento
        nodo->setPrev(pTail);           // tail <- nodo -> null
        pTail->setNext(nodo);           // tail <-> nodo -> null
        pTail = nodo;                   // nuevo tail
    }
    _size++;
}

template<typename T>
void LinkedList<T>::push_front(T value){
    Node<T>* nodo = new Node<T>(value);
    if (!pHead){                        //si esta vacio
        pHead = nodo;                   //nuevo head
        pTail = pHead;                  //nuevo tail
    }
    else{                                //si hay al menos un elemento
        nodo->setNext(pHead);           // null <- nodo -> head
        pHead->setPrev(nodo);           // null <- nodo <-> head
        pHead = nodo;                   // nuevo head
    }
    _size++;
}

template<typename T>
Node<T>* LinkedList<T>::get(int pos){      //devuelve puntero por posicion
    Node<T>* tmp = nullptr;
    if (pos < _size){                       //si la pos es menor que el tamaño
        tmp = pHead;
        for (int i = 0; i < pos; i++) tmp = tmp->getNext();   //avanza por la lista hasta que i = pos
    }
    return tmp;                             //devuelve puntero en la posicion pos
}

template<typename T>
void LinkedList<T>::insert(int pos, T value){     //inserta elemento por posicion
    if (!pHead) push_front(value);                   //si esta vacio inserta al inicio
    else if (pos >= _size) return;                //si pos es mayor o igual al tamaño, termina
    else{                                            //en otro caso
        if (pos == 0) push_front(value);             //inserta al inicio
        else if (pos == _size - 1) push_back(value);   //inserta al final
        else{
            Node<T>* nodo = new Node<T>(value);
            Node<T>* prev = get(pos - 1);             //obtiene el elemento anterior
            Node<T>* next = prev->getNext();        //guarda el sig
            nodo->setNext(next);                    // null <- nodo -> next
            nodo->setPrev(prev);                    // prev <- nodo -> next
            next->setPrev(nodo);                    // prev <- nodo <-> next
            prev->setNext(nodo);                    // prev <-> nodo -> next
            _size++;
        }
    }
}

//10. void Begin() que coloca el puntero pActual a la cabeza de la lista.         
template<typename T>
void LinkedList<T>::Begin() {
/*   while (pActual && pActual->getPrev())
        pActual = pActual->getPrev();*/
    pActual = pHead;
}

//11. void Last() que coloca el puntero pActual a al final de la lista.           
template<typename T>
void LinkedList<T>::Last() {
    while (pActual && pActual->getNext())
        pActual = pActual->getNext();
}

//12. void Next() que mueve el puntero pActual al siguiente nodo.                 
template<typename T>
void LinkedList<T>::Next() {
    if (pActual)
        pActual = pActual->getNext();
}

//13. void Previus() que mueve el puntero pActual al nodo anterior.               
template<typename T>
void LinkedList<T>::Previus() {
    if (pActual)
        pActual = pActual->getPrev();
}

//14. T GetDato() que retorna el dato apuntado por pActual.                       
template<typename T>
T LinkedList<T>::GetDato() {
    return pActual->getValue();  
}

template<typename T>
void LinkedList<T>::print(){
    Node<T>* tmp = pHead;
    while (tmp){
        std::cout << tmp->getValue() << ' ';
        tmp = tmp->getNext();
    }
    std::cout << '\n';
}

template<typename T>
void LinkedList<T>::reversePrint(){
    Node<T>* rTmp = pTail;
    while (rTmp){
        std::cout << rTmp->getValue() << ' ';
        rTmp = rTmp->getPrev();
    }
    std::cout << '\n';
}


template<typename T>
int LinkedList<T>::Maximum()
{
    Node<T>* tmp = pHead;
    int max=tmp->getValue();
    while(tmp)
    {
        if(tmp->getValue()>max){
            max=tmp->getValue();
        }
        tmp = tmp->getNext();
    }
    return max;
}

int maxAux(int a,int b){
    if (a>b){return a;}else{return b;}
}

template<typename T>
int LinkedList<T>::RMaximum(Node<T>* lista)
{   
    int max=lista->getValue();
    if(lista->getNext()==nullptr){
        return lista->getValue();
    }else{
        lista = lista->getNext();
        return maxAux(max,RMaximum(lista));
    }
}

template<typename T>
void LinkedList<T>::Rprint(Node<T>* lista)
{
    if(lista==nullptr){
        std::cout<<std::endl;
        return;
    }else{
        std::cout<<lista->getValue()<<' ';
        lista = lista->getNext();
        return Rprint(lista);
    }
}

template<typename T>
void LinkedList<T>::reverseRPrint(Node<T>* lista)
{
    if(lista==nullptr){
        std::cout<<std::endl;
        return;
    }else{
        std::cout<<lista->getValue()<<' ';
        lista = lista->getPrev();
        return reverseRPrint(lista);
    }
}

template<typename T>
int LinkedList<T>::PairCount()
{
    Node<T>* tmp = pHead;
    int pairs=0;
    while(tmp)
    {
        if(tmp->getValue()%2==0)pairs++;
        tmp = tmp->getNext();
    }
    return pairs;
}

#endif
