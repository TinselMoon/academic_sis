#include "stdafx.h"

Principal::Principal():
Vitor(),
Amanda()
{
    Vitor.inicializa(27,2,2005,"Vitor Cruz");
    Amanda.inicializa(28,2,2000,"Amanda Sornas");
}

Principal::~Principal(){

}

void Principal::executar(){
    Vitor.calc_idade(10,3,2026);
    Amanda.calc_idade(10,3,2026);
    cout << Vitor.inform_nome() << " tem " << Vitor.inform_idade() << " anos" << endl;
    cout << Amanda.inform_nome() << " tem " << Amanda.inform_idade() << " anos" << endl;
}
