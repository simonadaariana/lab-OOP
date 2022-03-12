
#pragma once
#include "service.h"
#include "repo.h"

class Tests {
public:
    Tests();
    Tests(const Repo &, const Service &);
    ~Tests();
    void test_all();

private:
    Repo repo;
    Service service;

    void test_cod();
    void test_pret();
    void test_brand();
    void test_nr_produse();
    void test_modificare();
    void test_stergere();
    void test_suma_produse();
    void test_achizitie();

};





