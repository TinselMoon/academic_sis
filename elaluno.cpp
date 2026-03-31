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
