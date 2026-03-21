#pragma once
#include "universidade.h"
class Pessoa{
private:
    int diaP;
    int mesP;
    int anoP;
    int idadeP;
    char nomeP[30];
    Universidade* pUni;
public:
    Pessoa(int dia, int mes, int ano, const char* nome = "Anonimo");
    Pessoa();
    ~Pessoa();
    void uni_estuda(Universidade* pUniEstuda);
    void inicializa(int diaAT, int mesAT, int anoAT, const char* nome = "");
    void calc_idade(int diaAT, int mesAT, int anoAT);
    int inform_idade();
    char* inform_nome();
    char* inform_uni();
};
