#include "stdafx.h"
#include "universidade.h"
#include "dept.h"

Universidade::Universidade(const char* nome){
    set_nome(nome);
}

Universidade::~Universidade(){
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

void Universidade::incldDept(Dept *pToDept){
    pToDept->set_univ(this);
    ObjLDept.incldDept(pToDept);
}

void Universidade::listeDepts(){
    cout << "Departamentos da Universidade " << nomeUni << ": " << endl;
    ObjLDept.listeDepts();
}

void Universidade::listeDeptsRev(){
    cout << "Departamentos da Universidade " << nomeUni << ": " << endl;
    ObjLDept.listeDeptsRev();
}
