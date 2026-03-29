#include "aluno.h"

Aluno::Aluno(int dia, int mes, int ano, const char* nome):
Pessoa(dia, mes, ano, nome){
    ra = -1;
    pToPrev = pToNext = NULL;
}

Aluno::Aluno():
Pessoa(){
    pToPrev = pToNext = NULL;
}

Aluno::~Aluno(){
    pToPrev = pToNext = NULL;
}

void Aluno::setRa(int num){
    ra = num;
}

int Aluno::getRa(){
    return ra;
}

