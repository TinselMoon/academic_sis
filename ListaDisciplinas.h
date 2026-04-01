#pragma once

class ElDisciplina;
class Disciplina;

class ListaDisciplinas{
private:
    ElDisciplina *First, *Last;
public:
    ListaDisciplinas();
    ~ListaDisciplinas();

    void incldDis(Disciplina* pToDis);
    void listeDis();
    void listeDisRev();
};
