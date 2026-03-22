#pragma once
#include "dept.h"

class Universidade{
private:
    char nomeUni[30];
    Dept* pDpto;
public:
    Universidade(const char* nome = "");
    ~Universidade();
    void set_nome(const char* nome);
    char* inform_uni();
    void set_dpto(Dept* pDptoFiliado);
};
