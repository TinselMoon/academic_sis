#pragma once

class Dept;

class ElDept{
private:
    Dept *pDept;
public:
    ElDept();
    ~ElDept();
    
    ElDept *next, *prev;
    void setDept(Dept *pToDept);
    Dept* getDept();
};


