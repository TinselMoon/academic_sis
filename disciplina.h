#pragma once

class Dept;

class Disciplina{
private:
    char nome[30];
    Dept* pDept;
public:
    Disciplina(const char* nomeD = "Unnamed");
    ~Disciplina();
    Disciplina* pToNext;
    void setName(const char* nomeD);
    void setDept(Dept* pToDept);
    const char* getName();
};
