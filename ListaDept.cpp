#include "ListaDept.h"
#include "eldept.h"
#include "dept.h"
#include "stdafx.h"

ListaDept::ListaDept(){
    First = Last = NULL;
}

ListaDept::~ListaDept(){
    Last = NULL;
    //Limpar nodes
    ElDept *t;
    while(First != NULL){
        t = First;
        First = First->next;
        delete t;
    }
    t = NULL;
}

void ListaDept::incldDept(Dept *pToDept){
    ElDept *aux = new ElDept;
    aux->setDept(pToDept);
    if(Last == NULL){
        First = aux;
        Last = aux;
        return;
    }
    aux->next = First;
    First->prev = aux;
    First = aux;
}

void ListaDept::listeDepts(){
    ElDept* t = First;
    while(t != NULL){
        cout << t->getDept()->getNome() << " / ";
        t = t->next;
    }
    cout << endl;
}

void ListaDept::listeDeptsRev(){
    ElDept* t = Last;
    while(t != NULL){
        cout << t->getDept()->getNome() << " / ";
        t = t->prev;
    }
    cout << endl;
}
