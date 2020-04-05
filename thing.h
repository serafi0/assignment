//
// Created  on 12/4/19.
//

#ifndef UNTITLED13_THING_H
#define UNTITLED13_THING_H

#include <string>
#include <iostream>

class thing{
private:
    int price;
     std::string name;

public:
    thing();

    thing(std::string n, int p);
    friend std::ostream & operator << (std::ostream &out, const thing &t){
        out<< "name :"<<t.name<<std::endl;
        out<<"price :"<<t.price<<"$" ;
        return out;
    };
    friend std::istream & operator >> (std::istream &in,  thing &t){
        std::cout << "Enter the price ";
        in >> t.price;
        std::cout << "Enter the name";
        in >> t.name;

        return in;

    };


    int operator+(thing const &obj);

    int  getPrice()const{
        return price;
    }

};



#endif //UNTITLED13_THING_H
