#include "disciplina.h"
#include "stdafx.h"
#include <string.h>

Disciplina::Disciplina(const char* nomeD, int max)
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
    ObjLAlunos.insert(pToAluno);
}

void Disciplina::printAluno(int i){
    cout << ObjLAlunos[i]->inform_nome() << endl;
}

