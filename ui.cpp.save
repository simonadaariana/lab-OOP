#include "tests.h"
#include "ui.h"
#include "validator.h"
#include <iostream>
using namespace std;

UserInterface::UserInterface(const Service &service, const Validator &validator) {
    this->service = service;
    this->validator = validator;
}

void UserInterface::meniu() {

    int op;
	Produs *lista = new Produs[10];
    int lungime = 0;
    double valoare;

    while (1){
        cout<<endl;
        cout<<"---------------------------"<<endl;
        cout<<"1. Citire lista"<<endl;
        cout<<"2. Afisare lista"<<endl;
        cout<<"3. Afisarea numarului de produse"<<endl;
        cout<<"4. Modificare produs"<<endl;
        cout<<"5. Stergere produs"<<endl;
        cout<<"6. Suma tuturor produselor"<<endl;
        cout<<"7. Produse posibile de cumparat"<<endl;

        cout<<"0. Iesire"<<endl;

        cout<<endl<<"Introduceti optiunea: "<<endl; cin>>op;
        if (op == 1)
        {
            cout << endl << "Introduceti produsul: " << endl;
            citire_element(lista);
        }
        if (op == 2)
            afisare_elemente(lista, lungime);
        if (op == 3)
            nr_elemente();
        if (op == 4)
            modificare_produs(lista);
        if (op == 5)
            stergere_produs(lista);
        if (op == 6)
            suma_produse(lista);
        if (op == 7)
            achizitie(lista, valoare);

        if (op == 0)
        {
            break;
            delete[]lista;
        }
        if (op>7)
            cout<<"Optiune inexistenta!"<<endl;
    }
}

void UserInterface::citire_element(Produs *lista) {
    int cod = 0;
    char *brand = new char[10];
    double pret = 0;
    Produs produs;

    cout << "Codul produsului: ";
    cin >> cod;
    if (cod <= 0)
        validator.validare_cod();

    cout << "Brand-ul produsului: ";
    cin >> brand;

    cout << "Pretul produsului: ";
    cin >> pret;
    if (pret <= 0)
        validator.validare_pret();

    if (cod > 0 && pret > 0)
        service.add_produs(cod, brand, pret);
}

void UserInterface::afisare_elemente(Produs *lista, int lungime) {

    lungime = service.numar_produse();
    cout << "Numarul produselor: " << lungime << endl << endl;
    cout << "Toate produsele: " << endl << endl;
    service.toate_produsele(lista, lungime);


}

void UserInterface::nr_elemente() {
    cout << "Numarul produselor: " << service.numar_produse() << endl;
}

void UserInterface::modificare_produs(Produs *lista){
    int cod_modf, dim;
    char *brand_modf = new char[10];
    double pret_modf;

    cout << "Introduceti codul produsului de modificat: " << endl;
    cin >> cod_modf;

    cout << "Introduceti noul brand: " << endl; cin >> brand_modf;
    cout << "Introduceti noul pret: " << endl; cin >> pret_modf;

    service.modifica(lista, dim, cod_modf, brand_modf, pret_modf);
}

void UserInterface::stergere_produs(Produs *lista){

    int cod_sterg, dim;
    cout<<"Introduceti codul produsului de sters: "; cin>>cod_sterg;

    service.stergere(lista, dim, cod_sterg);
}

void UserInterface::suma_produse(Produs *lista){

    cout << "Suma tuturor produselor este: ";
    service.suma_produse(lista);
}

void UserInterface::achizitie(Produs *lista, double valoare){

    cout << "Introduceti valoarea de care doriti sa achizitionati produse: ";
    cin >> valoare;

    service.achizitie(lista, valoare);
}

