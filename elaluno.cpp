#include "elaluno.h"
#include "stdafx.h"

ElAluno::ElAluno(){
    pAluno = NULL;
    nextElAluno = prevElAluno = NULL;
    p1 = p2 = final = faltas = 0;
}

ElAluno::~ElAluno(){
    pAluno = NULL;
    nextElAluno = prevElAluno = NULL;
}

void ElAluno::setAluno(Aluno *pa){
    pAluno = pa;
}

Aluno* ElAluno::getAluno(){
    return pAluno;
}

const char* ElAluno::getNome(){
    return pAluno->inform_nome();
}

void ElAluno::ins_p1(int nota_p1){
    p1 = nota_p1;
}

void ElAluno::ins_p2(int nota_p2){
    p2 = nota_p2;
}

void ElAluno::ins_final(int nota_final){
    final = nota_final;
}

void ElAluno::ins_falta(int falta){
    faltas+=falta;
}

