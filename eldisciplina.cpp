#include "eldisciplina.h"
#include "stdafx.h"

ElDisciplina::ElDisciplina(){
    pDis = NULL;
    nextDis = prevDis = NULL;
}

ElDisciplina::~ElDisciplina(){
    pDis = NULL;
    nextDis = prevDis = NULL;
}
