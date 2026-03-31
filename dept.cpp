#include "stdafx.h"
#include "dept.h"

Dept::Dept(const char* nomeDept){
    inicializa(nomeDept);
    pUniv = NULL;
    First = Last = NULL;
}

Dept::~Dept(){
    pUniv = NULL;
    //First = Last = NULL; ARRUMAR FREE
    Last = NULL;
    ElDisciplina *aux = NULL;
    while(First != NULL){
        aux = First;
        First = First->nextDis;
        delete aux;
    }
    aux = NULL;
}

void Dept::inicializa(const char* nomeDpt){
    strcpy(nome, nomeDpt);
}

const char* Dept::getNome(){
    return nome;
}

void Dept::set_univ(Universidade *pToUniv){
    pUniv = pToUniv;
}

void Dept::incldDis(Disciplina* pToDis){
    pToDis->setDept(this);
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

void Dept::listDis(){
    ElDisciplina* t = First;
    cout << "Disciplinas: ";
    while(t != NULL){
        cout << t->pDis->getName() << " / ";
        t = t->nextDis;
    }
    cout << endl;
}

void Dept::listDisRev(){
    ElDisciplina* t = Last;
    cout << "Disciplinas: ";
    while(t != NULL){
        cout << t->pDis->getName() << " / ";
        t = t->prevDis;
    }
    cout << endl;
}
