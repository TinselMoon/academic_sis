#pragma once
#include "pessoa.h"
#include "universidade.h"

class Principal{
private:
    Pessoa Vitor;
    Pessoa Amanda;
    Universidade UTFPR;
public:
    Principal();
    ~Principal();
    void executar();
};
