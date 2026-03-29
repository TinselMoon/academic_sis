#include "disciplina.h"
#include "stdafx.h"
#include <string.h>

Disciplina::Disciplina(const char* nomeD, int max){
    setName(nomeD);
    max_alunos = max;
    num_alunos = 0;
    pDept = NULL;
    pToNext = pToPrev = NULL;
    pFirst = pLast = NULL;
}

Disciplina::~Disciplina(){
    pDept = NULL;
    pToNext = pToPrev = NULL;
    pFirst = pLast = NULL;
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
    if(max_alunos == num_alunos){
        cout << "Turma cheia" << endl;
        return;
    }
    if(pLast == NULL){
        pFirst = pToAluno;
        pLast = pToAluno;
    }
    else{
        pToAluno->pToNext = pFirst;
        pFirst->pToPrev = pToAluno;
        pFirst = pToAluno;
    }
    num_alunos++;
}
void Disciplina::listAlunos(){
    Aluno* t = pFirst;
    cout << "Alunos da disciplina " << nome << ": ";
    while(t != NULL){
        cout << t->inform_nome() << " / ";
        t = t->pToNext;
    }
    cout << endl;
}

void Disciplina::listAlunosRev(){
    Aluno* t = pLast;
    cout << "Alunos da disciplina " << nome << ": ";
    while(t != NULL){
        cout << t->inform_nome() << " / ";
        t = t->pToPrev;
    }
    cout << endl;
}
