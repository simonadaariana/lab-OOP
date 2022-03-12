
#pragma once
#include "entitate.h"
#include "exceptie.h"


class Validator {
public:
    Validator();
    Validator(const Exceptie& exceptie);
    ~Validator();
    void validare_pret();
    void validare_cod();


private:
    Exceptie exceptie;
};
