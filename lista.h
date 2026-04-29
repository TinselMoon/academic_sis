#pragma once

#include "elemento.h"

template<class TIPO>
class Lista{
private:
    Elem<TIPO>* First;
    Elem<TIPO>* Last;

public:
    Lista();
    ~Lista();

    void insert(TIPO* p);
    TIPO* operator[](int i);
};

template<class TIPO>
Lista<TIPO>::Lista(){
    First = NULL;
    Last = NULL;
}

template<class TIPO>
Lista<TIPO>::~Lista(){
    //Fazer loop para delete
    Last = NULL;
    //Limpar nodes
    Elem<TIPO> *t;
    while(First != NULL){
        t = First;
        First = First->getNext();
        delete t;
    }
    t = NULL;
}

template<class TIPO>
void Lista<TIPO>::insert(TIPO* p){
    Elem<TIPO>* paux = NULL;
    paux = new Elem<TIPO>;
    paux->setElem(p);
    if(First == NULL){
        First = paux;
        Last = paux;
        return;
    }
    paux->setNext(First);
    First->setPrev(paux);
    First = paux;
}

template<class TIPO>
TIPO* Lista<TIPO>::operator[](int i){
    Elem<TIPO>* paux = First;
    for(int j = 0; j < i; j++){
        paux = paux->getNext();
    }
    return paux->getElem();
}
