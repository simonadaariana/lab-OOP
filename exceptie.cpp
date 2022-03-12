#include <iostream>
#include "exceptie.h"

using namespace std;


Exceptie::Exceptie(){
}

void Exceptie::exceptie_pret(){

    cout << "Pretul trebuie sa fie un numar pozitiv, mai mare ca 0." << endl;
}

void Exceptie::exceptie_cod(){

    cout << "Codul trebuie sa fie un numar pozitiv, mai mare ca 0." << endl;
}

Exceptie::~Exceptie(){
}
