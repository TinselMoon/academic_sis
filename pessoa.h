#pragma once

class Pessoa{
private:
    int diaP;
    int mesP;
    int anoP;
    int idadeP;
    char nomeP[30];
public:
    Pessoa(int dia = 0, int mes = 0, int ano = 0, const char* nome = "Anonimo");
    void calc_idade(int diaAT, int mesAT, int anoAT);
    int inform_idade();
    char* inform_nome();
};
