#pragma once
#include "pessoa.h"

class Aluno: public Pessoa{
private:
    int ra;
public:
    Aluno(int dia, int mes, int ano, const char* nome = "Anonimo");
    Aluno();
    ~Aluno();
    void setRa(int num);
    int getRa();
};
