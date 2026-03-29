#include "stdafx.h"
#include "dept.h"

Dept::Dept(const char* nomeDept){
    inicializa(nomeDept);
    pUniv = NULL;
    pFirst = pLast = NULL;
}

Dept::~Dept(){
    pUniv = NULL;
    pFirst = pLast = NULL;
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
    if(pLast == NULL){
        pFirst = pToDis;
        pLast = pToDis;
        return;
    }
    pToDis->pToNext = pFirst;
    pFirst = pToDis;
}

void Dept::listDis(){
    Disciplina* t = pFirst;
    cout << "Disciplinas: ";
    while(t != NULL){
        cout << t->getName() << " ";
        t = t->pToNext;
    }
    cout << endl;
}


