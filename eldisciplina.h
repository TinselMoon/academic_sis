#pragma once
#include "disciplina.h"

class ElDisciplina{
public:
    Disciplina *pDis;
    ElDisciplina *nextDis, *prevDis;
    ElDisciplina();
    ~ElDisciplina();

};
