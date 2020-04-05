//
// Created on 12/4/19.
//

#ifndef UNTITLED13_PERS

#define UNTITLED13_PERSON_H

#endif //UNTITLED13_PERSON_H
#include <string>
#include <vector>
#include <numeric>
#include "thing.h"
class person{
protected:
     std::string name;
    person(std::string n):name(n){}


public:
    person(){};
//    virtual void show()=0;
};




class employee: public person{
protected:
    int salary;
public:
    employee(std::string n,int s){
        name =n;
        salary = s;


    };

};

class client : public person{
protected:
    std::vector<thing> items_history={};
public:
client(std::string nn):person(nn){};
    int money_sum (){
        int result = 0;
        while(!items_history.empty()) {
            thing temp = items_history.back();
            items_history.pop_back();
            result += items_history.back() + temp;
            items_history.pop_back();

        }
        return result;

    }

    void addItem(const thing &obj ){
        items_history.push_back(obj);
    }

};