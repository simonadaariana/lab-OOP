#include <iostream>
#include "service.h"
#include "repo.h"
#include "repo_file.h"
#include "entitate.h"
#include <cstring>

using namespace std;

Service::Service() {
}

Service::Service(const Repo &repo, const RepoFile &repofile) {
    this->repo = repo;
    this->repofile = repofile;
}

Service::~Service() {
}

///adaugare produs
void Service::add_produs(int cod, char *brand, double pret) {
    Produs produs (cod, brand, pret);
    repo.addElem(produs);
    //repofile.loadFromFile();
}

///numarul produselor
int Service::numar_produse() {
    return repo.getSize();
}

///pentru afisarea tuturor produselor
int Service::toate_produsele(Produs *&lista, int dim) {
    return repo.getAll(lista, dim);
    //repofile.loadFromFile();
}

///modificare produs dupa cod
int Service::modifica(Produs *&lista, int dim, int cod_modf, char *brand_modf,  int pret_modf){
    int i;
    dim = repo.getSize();
    for (i = 0; i < dim; i++)
    {
        Produs produs, produs_aux;
        produs = repo.getElem(i);
        if (cod_modf == produs.cod)
        {
            if (pret_modf != 0)
                produs_aux.pret = pret_modf;
            if (brand_modf != nullptr)
                produs_aux.brand = brand_modf;
            produs_aux.cod = produs.cod;
            repo.deleteElem(produs, produs.cod);
            repo.addElem(produs_aux);

        }
    }
    return repo.getAll(lista, dim);
}


///stergere produs dupa cod
int Service::stergere(Produs *&lista, int dim, int cod_sterg){

    int i;
    dim = repo.getSize();
    for (i = 0; i < dim; i++)
    {
        Produs produs;
        produs = repo.getElem(i);
        if (produs.cod == cod_sterg)
            repo.deleteElem(produs, cod_sterg);
    }
}

///suma produse
int Service::suma_produse(Produs *&lista){

    int i, dim, suma = 0;
    dim = repo.getSize();
    for (i = 0; i < dim; i++)
    {
        Produs produs;
        produs = repo.getElem(i);
        suma = suma + produs.pret;
    }
    cout << suma;
}

///achizitie produse
void Service::achizitie(Produs *&lista, double valoare){

    int i, dim, v[12], cat10 = 0, cat5 = 0, cat1 = 0;
    v[1] = 5;
    v[5] = 5;
    v[10] = 5;
    int rest = 0;
    dim = repo.getSize();
    for (i = 0; i < dim; i++)
    {
        Produs produs;
        produs = repo.getElem(i);
        if (produs.pret <= valoare)
        {
            cout << produs;
            rest = valoare - produs.pret;
            cout << "Rest: " << rest << endl;

            if (rest % 5 != 0)
            {
                while (rest % 5 != 0)
                {
                    rest--;
                    cat1++;
                }
            }
            while (rest % 5 == 0 && rest % 10 != 0)
            {
                rest = rest - 5;
                cat5++;
            }
            if (rest % 10 == 0)
                cat10 = rest / 10;
            if (cat1 > v[1] || cat5 > v[5] || cat10 > v[10])
                cout << "Aparatul nu are suficiente bancnote." << endl;
            cout << "bancnote de 10: " << cat10 << " || " << "bancnote de 5: " << cat5 << " || " << "bancnote de 1: " << cat1 << endl;
        }
        else
            cout << "Nu puteti cumpara produse deoarece suma este prea mica." << endl;

    }
}
