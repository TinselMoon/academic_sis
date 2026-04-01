#pragma once

class Dept;

class ElDept{
private:
    Dept *pDept;
public:
    Eldept();
    ~ElDept();
    
    ElDept *next, *prev;
    void setDept(Dept *pToDept);
}


