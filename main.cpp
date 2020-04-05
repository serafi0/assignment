#include <iostream>
#include <string>
#include "person.h"
#include "thing.h"
#include <vector>
//TODO inheritance done
//TODO polymorphism  done
//TODO operator overloading done
//TODO stream i/o done
//TODO STL  done

int main() {
    std::vector<thing> all ={};
    client s("mohamed");
    char ss ='q';
while(ss!='Q'){
    std::cout<<"press C for client or E for employee";
    std::cin>>ss;

    while(ss=='E'){
        thing temp;
        std::cout<<"add a new item"<<std::endl;
        std::cin>>temp;
        all.push_back(temp);

        std::cout<<"ok"<<std::endl;
        std::cin>>ss;
    }

    if(ss=='c'){
        for(int i = 0; i < all.size(); i++){
            std::cout << i <<" : "<<all[i]<<std::endl;
        }
        int num = 0;
        std::cout<<"enter number or 99 to quit"<<std::endl;

        std::cin>>num;
        while(num!=99){

            s.addItem(all[num]);
            std::cout<<"enter number"<<std::endl;

            std::cin>>num;

        }
        std::cout<<"this is how much you will pay"<<std::endl;
        std::cout<<s.money_sum()<<std::endl;

        std::cout<<"ok?"<<std::endl;
        std::cin>>ss;

    }


}


    return 0;
}