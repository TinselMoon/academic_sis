#include "professor.h"
#include "stdafx.h"

Professor::Professor(int dia, int mes, int ano, const char* nome):
Pessoa(int dia, int mes, int ano, const char* nome){
    pUni = NULL;
    pDept = NULL;
}

Professor::Professor():
Pessoa(){
    pUni = NULL;
    pDept = NULL;
}

Professor::~Professor() {
}

char* Professor::inform_uni(){
    return pUni->inform_uni();
}

void Professor::set_dept(Dept* pToDept){
    pDept = pToDept;
}
void Professor::uni_estuda(Universidade* pUniEstuda){
    pUni = pUniEstuda;
}

const char* Professor::inform_dept(){
    return pDept->getNome();
}
