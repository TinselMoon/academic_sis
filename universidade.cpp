#include "stdafx.h"
#include "universidade.h"

Universidade::Universidade(const char* nome){
    set_nome(nome);
}

Universidade::~Universidade(){}

void Universidade::set_nome(const char* nome){
    strcpy(nomeUni, nome);
}

char* Universidade::inform_uni(){
    return nomeUni;
}

void Universidade::set_dpto(Dept* pDptoFiliado){
    pDpto = pDptoFiliado;
}
