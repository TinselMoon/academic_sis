#pragma once

class Dept{
private:
    char nome[30];
public:
    Dept(const char* nomeDept = "");
    ~Dept();
    void inicializa(const char* nomeDpt);
    const char* getNome();
}
