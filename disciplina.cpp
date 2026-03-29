#include "disciplina.h"
#include <string.h>

Disciplina::Disciplina(const char* nomeD){
    setName(nomeD);
    pDept = NULL;
    pToNext = NULL;
}

Disciplina::~Disciplina(){
    pDept = NULL;
    pToNext = NULL;
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

