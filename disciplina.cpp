#include "disciplina.h"
#include "stdafx.h"
#include <string.h>

Disciplina::Disciplina(const char* nomeD, int max):
ObjLAlunos(max)
{
    setName(nomeD);
    pDept = NULL;
}

Disciplina::~Disciplina(){
    pDept = NULL;
}
void Disciplina::setName(const char* nomeD){
    strcpy(nome, nomeD);
}

void Disciplina::setDept(Dept* pToDept){
    pDept = pToDept;
}

const char* Disciplina::getName(){
    return nome;
}

void Disciplina::incldAluno(Aluno *pToAluno){
    ObjLAlunos.incldAluno(pToAluno);
}
void Disciplina::listAlunos(){
    cout << "Alunos da disciplina " << nome << ": ";
    ObjLAlunos.listeAlunos();
}

void Disciplina::listAlunosRev(){
    cout << "Alunos da disciplina " << nome << ": ";
    ObjLAlunos.listeAlunosRev();
}
