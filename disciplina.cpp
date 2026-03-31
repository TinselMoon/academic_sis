#include "disciplina.h"
#include "stdafx.h"
#include <string.h>

Disciplina::Disciplina(const char* nomeD, int max){
    setName(nomeD);
    max_alunos = max;
    num_alunos = 0;
    pDept = NULL;
    FirstAluno = LastAluno = NULL;
}

Disciplina::~Disciplina(){
    pDept = NULL;
    LastAluno = NULL;
    ElAluno *aux = NULL;
    while(FirstAluno != NULL){
        aux = FirstAluno;
        FirstAluno = FirstAluno->nextElAluno;
        delete aux;
    }
    aux = NULL;
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
    ElAluno *p = NULL;
    p = new ElAluno();
    p->setAluno(pToAluno);
    if(LastAluno == NULL){
        FirstAluno = p;
        LastAluno = p;
    }
    else{
        p->nextElAluno = FirstAluno;
        FirstAluno->prevElAluno = p;
        FirstAluno = p;
    }
    num_alunos++;
}
void Disciplina::listAlunos(){
    ElAluno* t;
    cout << "Alunos da disciplina " << nome << ": ";
    for(t = FirstAluno; t != NULL; t = t->nextElAluno){
        cout << t->getAluno()->inform_nome() << " / ";
    }
    cout << endl;
}

void Disciplina::listAlunosRev(){
    ElAluno* t;
    cout << "Alunos da disciplina " << nome << ": ";
    for(t = LastAluno; t != NULL; t = t->prevElAluno){
        cout << t->getAluno()->inform_nome() << " / ";
    }
    cout << endl;
}
