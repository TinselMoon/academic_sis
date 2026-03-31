#include "aluno.h"
#include "stdafx.h"

Aluno::Aluno(int dia, int mes, int ano, const char* nome):
Pessoa(dia, mes, ano, nome){
    ra = -1;
}

Aluno::Aluno():
Pessoa(){
}

Aluno::~Aluno(){
}

void Aluno::setRa(int num){
    ra = num;
}

int Aluno::getRa(){
    return ra;
}

