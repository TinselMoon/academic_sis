#include "stdafx.h"
#include "pessoa.h"
#include "universidade.h"
#include "dept.h"

Pessoa::Pessoa(int dia, int mes, int ano, const char* nome){
    inicializa(dia, mes, ano, nome);
}

Pessoa::Pessoa(){
    inicializa(0, 0, 0);
}

Pessoa::~Pessoa(){

}

void Pessoa::uni_estuda(Universidade* pUniEstuda){
    pUni = pUniEstuda;
}

void Pessoa::inicializa(int diaAT, int mesAT, int anoAT, const char* nome){
    diaP = diaAT;
    mesP = mesAT;
    anoP = anoAT;
    idadeP = -1;
    strcpy(nomeP, nome);
    pUni = NULL;
    pDept = NULL;
}

void Pessoa::calc_idade(int diaAT, int mesAT, int anoAT){
    idadeP = anoAT - anoP;
    if(mesAT < mesP){
        idadeP--;
    }
    else{
        if(mesAT == mesP && diaAT < diaP){
            idadeP--;
        }
    }
}

int Pessoa::inform_idade(){
    return idadeP;
}

char* Pessoa::inform_nome(){
    return nomeP;
}

char* Pessoa::inform_uni(){
    return pUni->inform_uni();
}

void Pessoa::set_dept(Dept* pToDept){
    pDept = pToDept;
}

const char* Pessoa::inform_dept(){
    return pDept->getNome();
}

