#include "elaluno.h"
#include "stdafx.h"

ElAluno::ElAluno(){
    pAluno = NULL;
    nextElAluno = prevElAluno = NULL;
}

ElAluno::~ElAluno(){
    pAluno = NULL;
    nextElAluno = prevElAluno = NULL;
}

void ElAluno::setAluno(Aluno *pa){
    pAluno = pa;
}

Aluno* ElAluno::getAluno(){
    return pAluno;
}

const char* ElAluno::getNome(){
    return pAluno->inform_nome();
}
