#pragma once
#include "professor.h"
#include "aluno.h"

class Principal{
private:
    Professor Vitor;
    Aluno Joaquim;
    Universidade UTFPR;
    Dept Dainf;
    Dept Daeln;
public:
    Principal();
    ~Principal();
    void executar();
};
