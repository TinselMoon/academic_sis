#pragma once
class Universidade;
class Pessoa{
protected:
    int diaP;
    int mesP;
    int anoP;
    int idadeP;
    char nomeP[30];
public:
    Pessoa(int dia, int mes, int ano, const char* nome = "Anonimo");
    Pessoa();
    ~Pessoa();
    void inicializa(int diaAT, int mesAT, int anoAT, const char* nome = "");
    void calc_idade(int diaAT, int mesAT, int anoAT);
    int inform_idade();
    void setNome(const char* nomeN = "");
    char* inform_nome();
};
