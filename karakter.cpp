#include <iostream>
#include <string>
#include "karakter.h"

using std::cin;
using std::cout;
using std::string;

void kurangidarah(Karakter& k, int damage){
    if(k.darah - damage >= 0){
        k.darah -= damage;
    }

    else k.darah = 0;
};

void cetakstatus(const Karakter& k){
    cout << "Nama : " << k.nama << "\n";
    cout << "HP   : " << k.darah << "\n";
}

