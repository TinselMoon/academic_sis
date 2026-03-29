#pragma once
#include "pessoa.h"

class Aluno: public Pessoa{
private:
    int ra;
public:
    Aluno(int dia, int mes, int ano, const char* nome = "Anonimo");
    Aluno();
    ~Aluno();
    Aluno *pToNext, *pToPrev;
    void setRa(int num);
    int getRa();
};
