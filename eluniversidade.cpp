#include "eluniversidade.h"
#include "stdafx.h"

ElUniversidade::ElUniversidade(){
    pUni = NULL;
    nextUni = prevUni = NULL;
}

ElUniversidade::~ElUniversidade(){
    pUni = NULL;
    nextUni = prevUni = NULL;
}
