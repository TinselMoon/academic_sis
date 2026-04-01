#pragma once
#include "pessoa.h"

class Dept;

class Professor: public Pessoa{
private:
    Universidade* pUni;
    Dept* pDept;
public:
    Professor(int dia, int mes, int ano, const char* nome = "Anonimo");
    Professor();
    ~Professor();
    void uni_estuda(Universidade* pUniEstuda);
    char* inform_uni();
    void set_dept(Dept* pToDept);
    const char* inform_dept();
};

