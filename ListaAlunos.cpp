#include "ListaAlunos.h"
#include "stdafx.h"

ListaAlunos::ListaAlunos(int max){
    First = Last = NULL;
    max_alunos = max;
    cont_alunos = 0;
    strcpy(nome, "")
}

ListaAlunos::~ListaAlunos(){
    //liberar memoria dos alunos
    Last = NULL;
    ElAluno *aux = NULL;
    while(First != NULL){
        aux = First;
        First = First->nextElAluno;
        delete aux;
    }
    aux = NULL;
}

void ListaAlunos::incldAluno(Aluno *pToAluno){
    if(max_alunos == cont_alunos || pToAluno == NULL){
        cout << "Turma cheia ou aluno não existe" << endl;
        return;
    }
    ElAluno *p = NULL;
    p = new ElAluno();
    p->setAluno(pToAluno);
    if(Last == NULL){
        First = p;
        Last = p;
    }
    else{
        p->nextElAluno = First;
        First->prevElAluno = p;
        First = p;
    }
    cont_alunos++;

}

void ListaAlunos::listeAlunos(){
    ElAluno* t;
    cout << "Alunos da disciplina " << nome << ": ";
    for(t = First; t != NULL; t = t->nextElAluno){
        cout << t->getAluno()->inform_nome() << " / ";
    }
    cout << endl;
}

void ListaAlunos::listeAlunosRev(){
    ElAluno* t;
    cout << "Alunos da disciplina " << nome << ": ";
    for(t = Last; t != NULL; t = t->prevElAluno){
        cout << t->getAluno()->inform_nome() << " / ";
    }
    cout << endl;
}

