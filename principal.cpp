#include "stdafx.h"

Principal::Principal():
Vitor(),
UTFPR(),
Dainf()
{
    Vitor.inicializa(27,2,2005,"Vitor Cruz");
    UTFPR.set_nome("UTFPR");
    Dainf.inicializa("DAINF");
    UTFPR.set_dpto(&Dainf);
    Vitor.set_dept(&Dainf);

}

Principal::~Principal(){

}

void Principal::executar(){
    Vitor.calc_idade(10,3,2026);
    Vitor.uni_estuda(&UTFPR);
    cout << Vitor.inform_nome() << " tem " << Vitor.inform_idade() << " anos" << endl;
    cout << Vitor.inform_nome() << " estuda na faculdade: " << Vitor.inform_uni() << " no departamento: " << Vitor.inform_dept() << endl;
}
