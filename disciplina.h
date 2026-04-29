#pragma once
#include "aluno.h"
#include "lista.h"

class Dept;

class Disciplina{
private:
    int id;
    char nome[30];
    Dept* pDept;

    Lista<Aluno> ObjLAlunos;

public:
    Disciplina(const char* nomeD = "Unnamed", int max = 45);
    ~Disciplina();
    void setName(const char* nomeD);
    void setDept(Dept* pToDept);
    const char* getName();
    void incldAluno(Aluno *pToAluno);
    void printAluno(int i);
    void listAlunos();
    void listAlunosRev();
};
