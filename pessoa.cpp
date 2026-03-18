#include "pessoa.h"
#include "stdafx.h"

Pessoa::Pessoa(int dia, int mes, int ano, const char* nome){
    diaP = dia;
    mesP = mes;
    anoP = ano;
    idadeP = -1;
    strcpy(nomeP, nome);

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
