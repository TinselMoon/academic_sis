#pragma once
#include "aluno.h"

class ElAluno{
private:
    Aluno* pAluno;
public:
    ElAluno();
    ~ElAluno();
    void setAluno(Aluno *pa);
    Aluno* getAluno();
    const char* getNome();
    ElAluno *nextElAluno, *prevElAluno;

};

