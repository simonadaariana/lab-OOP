#include "entitate.h"
#include <cstring>

///constructori
Produs::Produs(){
    cod = 0;
    brand = nullptr;
    pret = 0;
}

Produs::Produs(int c, const char *b, double p) {
    this->cod = c;
    brand = new char[sizeof(b) + 1];
    strcpy_s(this->brand, sizeof(b) + 1, b);
    this->pret = p;
}

Produs::Produs(const Produs &produs) {
    cod = produs.cod;
    brand = new char[strlen(produs.brand) + 1];
    strcpy_s(brand, strlen(produs.brand) + 1, produs.brand);
    pret = produs.pret;

}

///getteri
int Produs::getCod() {
    return this->cod;
}

char *&Produs::getBrand(){
    return this->brand;
}

int Produs::getPret(){
    return this->pret;
}

///setteri
void Produs::setCod(int c) {
    cod = c;
}

void Produs::setBrand(const char *b) {
    if (brand)
        delete[] brand;
    brand = new char[strlen(b) + 1];
    strcpy_s(brand, strlen(b) + 1, b);
}

void Produs::setPret(double p){
    pret = p;
}

///operator =
Produs &Produs::operator=(const Produs &produs) {

    if (this != &produs) {
        cod = produs.cod;
        if (brand)
            delete[]brand;
        brand = new char[strlen(produs.brand) + 1];
        strcpy_s(brand, strlen(produs.brand) + 1, produs.brand);
        pret = produs.pret;
    }
    return *this;
}

///destructor
Produs::~Produs() {

    cod = 0;
    if (brand) {
        delete[]brand;
    }
    pret = 0;
}

///friend
std::ostream &operator<<(std::ostream &os, const Produs &produs) {
    os << "Codul produsului: "<< produs.cod << " || " << "Brandul produsului: "<< produs.brand << " || " << "Pretul produsului: "<< produs.pret << std::endl;
    return os;
}



