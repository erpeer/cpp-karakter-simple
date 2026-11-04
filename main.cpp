#include <iostream>
#include <string>
#include "karakter.h"

using std::cin;
using std::cout;
using std::string;

int main(){
    string s;
    getline(cin, s);

    int blod;
    cin >> blod;

    Karakter k(s, blod);

    int damage;
    cin >> damage;

    kurangidarah(k, damage);
    cetakstatus(k);
}