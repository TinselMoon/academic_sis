#include "stdafx.h"
#include "pessoa.h"

int main(){
    Pessoa Vitor(10, 3, 2009);
    Vitor.calc_idade(10, 3, 2026);
    cout << Vitor.inform_nome() << " tem " << Vitor.inform_idade() << " anos" << endl;
    getchar();
    return 0;
}
