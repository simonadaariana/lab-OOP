
#pragma once
#include "repo.h"
#include "repo_file.h"

class Service {
public:
    Service();
    Service(const Repo &, const RepoFile &);
    ~Service();

    void add_produs(int, char*, double);
    int numar_produse();
    int toate_produsele(Produs *&, int) ;
    int modifica(Produs *&, int, int, char*, int);
    int stergere(Produs*&, int, int);
    int suma_produse(Produs *&);
    void achizitie(Produs *&, double);

private:
    Repo repo;
    RepoFile repofile;
};

