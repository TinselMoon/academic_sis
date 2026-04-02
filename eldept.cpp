#include "eldept.h"
#include "stdafx.h"

ElDept::ElDept(){
    next = prev = NULL;
}

ElDept::~ElDept(){
    next = prev = NULL;
}

void ElDept::setDept(Dept *pToDept){
    pDept = pToDept;
}

Dept* ElDept::getDept(){
    return pDept;
}
