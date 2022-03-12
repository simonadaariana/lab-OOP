#pragma once
#include "entitate.h"
class Repo {
public:
    Repo();
    ~Repo();
    void addElem(Produs produs);
    Produs getElem(int i);
    int getAll(Produs *elem, int dim);
    int getSize();
    int deleteElem(Produs produs, int cod_sterg);

private:
    Produs elem[10];
    int dim;
};


