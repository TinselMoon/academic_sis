#pragma once
#include "disciplina.h"

class Universidade;

class Dept{
private:
    char nome[30];
    Universidade* pUniv;
    Disciplina* pFirst;
    Disciplina* pLast;
public:
    Dept(const char* nomeDept = "");
    ~Dept();
    void inicializa(const char* nomeDpt);
    const char* getNome();
    void set_univ(Universidade *pToUniv);
    void incldDis(Disciplina* pToDis);
    void listDis();
    void listDisRev();
};
