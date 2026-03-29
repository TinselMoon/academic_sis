#pragma once
#include "aluno.h"

class Dept;

class Disciplina{
private:
    char nome[30];
    int max_alunos;
    int num_alunos;
    Dept* pDept;
public:
    Disciplina(const char* nomeD = "Unnamed", int max = 45);
    ~Disciplina();
    Disciplina *pToNext, *pToPrev;
    Aluno *pFirst, *pLast;
    void setName(const char* nomeD);
    void setDept(Dept* pToDept);
    const char* getName();
    void incldAluno(Aluno *pToAluno);
    void listAlunos();
    void listAlunosRev();
};
