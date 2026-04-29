#pragma once
#include "stdafx.h"

template<class TIPO>
class Elem{
private:
    Elem<TIPO>* next;
    Elem<TIPO>* prev;
    TIPO* pElem;
public:
    Elem();
    ~Elem();

    void setNext(Elem<TIPO>* pNext);
    void setPrev(Elem<TIPO>* pPrev);
    void setElem(TIPO* pToElem);

    Elem<TIPO>* getNext();
    Elem<TIPO>* getPrev();

    TIPO* getElem();
};

template<class TIPO>
Elem<TIPO>::Elem(){
    next = NULL;
    prev = NULL;
    pElem = NULL;
}

template<class TIPO>
Elem<TIPO>::~Elem(){
    next = NULL;
    prev = NULL;
    pElem = NULL;
}

template<class TIPO>
void Elem<TIPO>::setNext(Elem<TIPO>* pNext){
    next = pNext;
}

template<class TIPO>
void Elem<TIPO>::setPrev(Elem<TIPO>* pPrev){
    prev = pPrev;
}

template<class TIPO>
void Elem<TIPO>::setElem(TIPO* pToElem){
    pElem = pToElem;
}

template<class TIPO>
Elem<TIPO>* Elem<TIPO>::getPrev(){
    return prev;
}

template<class TIPO>
Elem<TIPO>* Elem<TIPO>::getNext(){
    return next;
}

template<class TIPO>
TIPO* Elem<TIPO>::getElem(){
    return pElem;
}
