#include "ListaDisciplinas.h"
#include "eldisciplina.h"
#include "stdafx.h"

ListaDisciplinas::ListaDisciplinas(){
    First = Last = NULL;
}

ListaDisciplinas::~ListaDisciplinas(){
    Last = NULL;
    ElDisciplina *aux = NULL;
    while(First != NULL){
        aux = First;
        First = First->nextDis;
        delete aux;
    }
    aux = NULL;
}

void ListaDisciplinas::incldDis(Disciplina* pToDis){
    ElDisciplina *aux = new ElDisciplina;
    aux->pDis = pToDis;
    if(Last == NULL){
        First = aux;
        Last = aux;
        return;
    }
    aux->nextDis = First;
    First->prevDis = aux;
    First = aux;
}

void ListaDisciplinas::listeDis(){
    ElDisciplina* t = First;
    cout << "Disciplinas: ";
    while(t != NULL){
        cout << t->pDis->getName() << " / ";
        t = t->nextDis;
    }
    cout << endl;
}

void ListaDisciplinas::listeDisRev(){
    ElDisciplina* t = Last;
    cout << "Disciplinas: ";
    while(t != NULL){
        cout << t->pDis->getName() << " / ";
        t = t->prevDis;
    }
    cout << endl;
}
