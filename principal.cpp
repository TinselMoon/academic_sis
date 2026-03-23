#include "stdafx.h"
#include "principal.h"

Principal::Principal():
Vitor(),
UTFPR(),
Dainf(),
Daeln()
{
    Vitor.inicializa(27,2,2005,"Vitor Cruz");
    UTFPR.set_nome("UTFPR");
    Dainf.inicializa("DAINF");
    Daeln.inicializa("DAELN");
    UTFPR.set_dpto(&Dainf);
    UTFPR.set_dpto(&Daeln);
    Vitor.set_dept(&Dainf);
    Dainf.set_univ(&UTFPR);
}

Principal::~Principal(){
}

void Principal::executar(){
    Vitor.calc_idade(10,3,2026);
    Vitor.uni_estuda(&UTFPR);
    cout << Vitor.inform_nome() << " tem " << Vitor.inform_idade() << " anos" << endl;
    cout << Vitor.inform_nome() << " estuda na faculdade: " << Vitor.inform_uni() << " no departamento: " << Vitor.inform_dept() << endl;
    UTFPR.imprimeDepts();
}
