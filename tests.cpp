#include <iostream>
#include <assert.h>
#include "tests.h"
#include "repo.h"
#include "entitate.h"
#include "service.h"

using namespace std;

Tests::Tests() {
}

Tests::Tests(const Repo &repo, const Service &service) {
    this->repo = repo;
    this->service = service;
}

Tests::~Tests() {
}

void Tests::test_cod(){
    Produs produs;
    produs.setCod(12);
    assert(produs.getCod() == 12);
}

void Tests::test_pret(){
    Produs produs;
    produs.setPret(120);
    assert(produs.getPret() == 120);
}

void Tests::test_brand(){
    Produs produs;
    produs.setBrand("brand1");
    assert(produs.getBrand() == "brand1");
}

void Tests::test_nr_produse(){
    Produs produs1, produs2;
    Produs *lista;
    repo.addElem(produs1);
    repo.addElem(produs2);
    assert(repo.getSize() == 2);
}

void Tests::test_modificare(){
    Produs *lista;
    Produs produs;
    produs.setCod(1);
    produs.setBrand("brand1");
    produs.setPret(10.5);
    repo.addElem(produs);

    service.modifica(lista, 1, 1, "brand2", 11);
    assert(produs.getCod() == 1);
    assert(produs.getPret() == 11);
    assert(produs.getBrand() == "brand2");
}

void Tests::test_stergere(){
    Produs *lista;
    Produs produs1, produs2;

    produs1.setCod(1);
    produs2.setCod(2);

    repo.addElem(produs1);
    repo.addElem(produs2);

    repo.deleteElem(produs1, 1);

    assert(repo.getSize() == 1);
}

void Tests::test_suma_produse(){
    Produs *lista;
    Produs produs1, produs2, produs3;

    produs1.setPret(120);
    produs2.setPret(10);
    produs3.setPret(300);

    repo.addElem(produs1);
    repo.addElem(produs2);
    repo.addElem(produs3);

    assert(service.suma_produse(lista) == 430);

}

void Tests::test_achizitie(){

    Produs produs;
    produs.setPret(25);
    double buget = 50, rest = 0;

    rest = buget - produs.pret;
    assert (rest > 0);
    assert (rest == 25);
}

void Tests::test_all(){
    test_cod();
    test_pret();
    test_brand();
    test_nr_produse();
    test_modificare();
    test_stergere();
    test_suma_produse();
    test_achizitie();

}


