#pragma once
#include "eldisciplina.h"

class Universidade;

class Dept{
private:
    char nome[30];
    Universidade* pUniv;
public:
    Dept(const char* nomeDept = "");
    ~Dept();
    ElDisciplina* First;
    ElDisciplina* Last;
    void inicializa(const char* nomeDpt);
    const char* getNome();
    void set_univ(Universidade *pToUniv);
    void incldDis(Disciplina* pToDis);
    void listDis();
    void listDisRev();
};
