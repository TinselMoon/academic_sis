#pragma once
#include "aluno.h"

class ElAluno{
public:
    Aluno* pAluno;
    ElAluno();
    ~ElAluno();
    void setAluno(Aluno *pa);
    Aluno* getAluno();
    const char getNome();
    ElAluno *nextElAluno, *prevElAluno;

};

