#pragma once

class Universidade;

class Dept{
private:
    char nome[30];
    Universidade* pUniv;
public:
    Dept(const char* nomeDept = "");
    ~Dept();
    void inicializa(const char* nomeDpt);
    const char* getNome();
    void set_univ(Universidade *pToUniv);
};
