#pragma once
#include <iostream>

class Produs {
private:

public:
    int cod;
    char *brand;
    double pret;
    Produs();

    Produs(int, const char *, double);

    Produs(const Produs &produs);

    ~Produs();
    int getCod();
    char *&getBrand();
    int getPret();

    void setCod(int);
    void setBrand(const char *);
    void setPret(double);

    Produs &operator=(const Produs &);

    friend std::ostream &operator<<(std::ostream &os, const Produs &produs);

    bool operator==(const Produs &);
    char *toString();
};




