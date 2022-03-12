#include "service.h"
#include "repo.h"
using namespace std;


Repo::Repo(){
    this -> dim = 0;
}

Repo::~Repo(){
}

void Repo::addElem(Produs produs){

    elem[dim++] = produs;
}

Produs Repo::getElem(int i){

    return elem[i];

}

int Repo::getAll(Produs *elem, int dim){

    int i;
    dim = getSize();
    for (i = 0; i < dim; i++)
        cout << getElem(i) << endl;
}

int Repo::getSize(){
    return dim;
}


int Repo::deleteElem(Produs produs, int cod_sterg){
    Produs *elem;
    int i, j, aux;
    dim = getSize();
    for (j = 0; j < dim; j++)
    {
        if (elem[j].cod == cod_sterg)
        {
            aux = j;
            break;
        }
    }
    for (i = aux; i < dim-1; i++)
    {
        elem[i] = elem[i+1];
    }
    dim--;

}

