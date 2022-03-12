#include <iostream>
#include "validator.h"
#include "entitate.h"
#include "exceptie.h"

using namespace std;

Validator::Validator(){
}

Validator::Validator(const Exceptie &exceptie){
    this->exceptie = exceptie;
}

void Validator::validare_pret(){
    Produs produs;
    try
    {
        if (produs.pret <= 0)
            throw produs.pret;
    }
    catch(...)
    {
        exceptie.exceptie_pret();
    }
}

void Validator::validare_cod(){
    Produs produs;
    try
    {
        if (produs.cod <= 0)
            throw produs.cod;
    }
    catch(...)
    {
        exceptie.exceptie_cod();
    }
}

Validator::~Validator(){
}
