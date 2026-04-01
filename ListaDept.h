#pragma once

class ElDept;
class Dept;

class ListaDept{
private:
    ElDept *First, *Last;
public:
    ListaDept();
    ~ListaDept();

    void incldDept(Dept* pToDept);
    void listeDepts();
    void listeDeptsRev();
};
