//
// Created  on 12/4/19.
//

#include "thing.h"

int thing::operator+(thing const &obj) {
    return price + obj.getPrice();
};

thing::thing() : price(0), name("none"){};

thing::thing(std::string n, int p) : name(n), price(p){}


