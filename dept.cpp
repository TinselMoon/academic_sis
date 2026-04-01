#include "stdafx.h"
#include "dept.h"
#include "disciplina.h"
#include "ListaDisciplinas.h"

Dept::Dept(const char* nomeDept):
ObjLDis()
{
    inicializa(nomeDept);
    pUniv = NULL;
}

Dept::~Dept(){
    pUniv = NULL;
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
    //chamr func incldDis
    ObjLDis.incldDis(pToDis);
}

void Dept::listDis(){
    //chamar func de listadis
    ObjLDis.listeDis();
}

void Dept::listDisRev(){
    ObjLDis.listeDisRev();
}
