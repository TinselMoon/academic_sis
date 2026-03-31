#pragma once


class ElAluno;

class ListaAlunos{
private:
    ElAluno *First, *Last;
    int cont_alunos, max_alunos;
    char nome[150];
public:
    ListaAlunos(int max = 45);
    ~ListaAlunos();

    void incldAluno(Aluno *pToAluno);
    void listeAlunos();
    void listeAlunosRev();
};
