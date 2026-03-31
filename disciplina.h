#pragma once
#include "ListaAlunos.h"

class Dept;

class Disciplina{
private:
    int id;
    char nome[30];
    Dept* pDept;

    ListaAlunos ObjLAlunos;

public:
    Disciplina(const char* nomeD = "Unnamed", int max = 45);
    ~Disciplina();
    void setName(const char* nomeD);
    void setDept(Dept* pToDept);
    const char* getName();
    void incldAluno(Aluno *pToAluno);
    void listAlunos();
    void listAlunosRev();
};
