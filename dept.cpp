#include "stdafx.h"
#include "dept.h"

Dept::Dept(const char* nomeDept){
    inicializa(nomeDept);
    pUniv = NULL;
}

Dept::~Dept(){

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
