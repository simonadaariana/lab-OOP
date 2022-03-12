#include "tests.h"
#include "service.h"
#include "validator.h"

class UserInterface {
public:
    UserInterface() = default;
    UserInterface(const Service &, const Validator &);
    void meniu();


private:
    Service service;
    Validator validator;

    void citire_element(Produs *lista);
    void afisare_elemente(Produs *lista, int lungime);
    void nr_elemente();
    void modificare_produs(Produs *lista);
    void stergere_produs(Produs *lista);
    void suma_produse(Produs *lista);
    void achizitie(Produs *lista, double valoare);
};


