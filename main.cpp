#include "stdafx.h"
#include "pessoa.h"

int main(){
    Pessoa Vitor(27, 3, 2005);
    Vitor.calc_idade(10, 3, 2026);
    cout << Vitor.inform_nome() << " tem " << Vitor.inform_idade() << " anos" << endl;
    getchar();
    return 0;
}
