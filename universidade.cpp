#include "stdafx.h"
#include "universidade.h"

Universidade::Universidade(const char* nome){
    set_nome(nome);
    ctdDepts = 0;
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

void Universidade::set_dpto(Dept* pDptoFiliado){
    departamentos.push_back(pDptoFiliado);
    ctdDepts++;
}

void Universidade::imprimeDepts(){
    for(int i = 0; i < ctdDepts; i++){
        cout << departamentos[i]->getNome() << endl;
    }
}

