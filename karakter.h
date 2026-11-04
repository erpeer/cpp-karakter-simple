#pragma once
#include <string>

struct Karakter {
    public:
       std::string nama;
       int darah;
       Karakter(std::string name, int blood){
        nama = name;
        darah = blood;
       }
};

void kurangidarah(Karakter& k, int damage);
void cetakstatus(const Karakter& k);