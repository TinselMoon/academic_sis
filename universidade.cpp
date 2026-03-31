#include "stdafx.h"
#include "eluniversidade.h"

Universidade::Universidade(const char* nome){
    set_nome(nome);
    ctdDepts = 0;
    First = Last = NULL;
}

Universidade::~Universidade(){
    //desalocar memoria dinamica
    ElUniversidade *aux = NULL;
    while(First != NULL){
        aux = First;
        First = First->nextUni;
        delete aux;
    }
    aux = NULL;
}

void Universidade::set_nome(const char* nome){
    strcpy(nomeUni, nome);
}

const char* Universidade::getName(){
    return nomeUni;
}

char* Universidade::inform_uni(){
    return nomeUni;
}

void Universidade::set_dpto(Dept* pDptoFiliado){
    departamentos.push_back(pDptoFiliado);
    ctdDepts++;
}

void Universidade::imprimeDepts(){
    for(int i = 0; i < ctdDepts; i++){
        cout << departamentos[i]->getNome() << endl;
    }
}

void Universidade::incldUni(Universidade* pToUni){
    ElUniversidade *aux = new ElUniversidade;
    aux->pUni = pToUni;
    if(Last == NULL){
        First = aux;
        Last = aux;
        return;
    }
    aux->nextUni = First;
    First->prevUni = aux;
    First = aux;
}

void Universidade::listUni(){
    ElUniversidade* t = First;
    cout << "Universidades: ";
    while(t != NULL){
        cout << t->pUni->getName() << " / ";
        t = t->nextUni;
    }
    cout << endl;
}

void Universidade::listUniRev(){
    ElUniversidade* t = Last;
    cout << "Universidades: ";
    while(t != NULL){
        cout << t->pUni->getName() << " / ";
        t = t->prevUni;
    }
    cout << endl;
}
