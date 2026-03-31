#pragma once
#include "aluno.h"

class ElAluno{
private:
    Aluno* pAluno;
    int p1, p2, final, faltas;
public:
    ElAluno();
    ~ElAluno();
    void setAluno(Aluno *pa);
    Aluno* getAluno();
    const char* getNome();
    void ins_p1(int nota_p1);
    void ins_p2(int nota_p2);
    void ins_final(int nota_final);
    void ins_falta(int falta = 1);
    ElAluno *nextElAluno, *prevElAluno;

};

