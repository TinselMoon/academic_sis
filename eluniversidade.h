#pragma once
class Universidade;

class ElUniversidade{
public:
    Universidade *pUni;
    ElUniversidade *nextUni, *prevUni;
    ElUniversidade();
    ~ElUniversidade();
};
