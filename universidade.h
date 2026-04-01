#pragma once
//#include "dept.h"
#include "ListaDept.h"

class Universidade{
private:
    char nomeUni[30];
    ListaDept ObjLDept;
    
public:
    Universidade(const char* nome = "");
    ~Universidade();
    void set_nome(const char* nome);
    char* inform_uni();
    const char* getName();

    void incldDept(Dept *pToDept);
    void listeDept();
    void listeDeptRev();
};
