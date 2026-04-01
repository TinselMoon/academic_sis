#pragma once
#include "ListaDisciplinas.h"

class Universidade;
class Disciplina;

class Dept{
private:
    char nome[30];
    Universidade* pUniv;

    ListaDisciplinas ObjLDis;

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
