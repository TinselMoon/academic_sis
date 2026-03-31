#pragma once
#include "dept.h"
#include <vector>
using namespace std;

class Universidade{
private:
    char nomeUni[30];
    //Dept* pDpto;
    vector<Dept*>departamentos;
    int ctdDepts;
public:
    Universidade(const char* nome = "");
    ~Universidade();
    void set_nome(const char* nome);
    char* inform_uni();
    void set_dpto(Dept* pDptoFiliado);
    void imprimeDepts();
    const char* getName();
};
