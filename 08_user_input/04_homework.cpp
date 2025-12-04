// homework : take input of age and name of 2 friends of class 12th standard.


#include <iostream>


int main(){

    std::string name1;
    int age1;

    std::cout<<"friend 1 write your name: ";
    std::getline(std::cin>>std::ws,name1);

    std::cout<<"friend 1 type your age";
    std::cin>>age1;


    


    std::string name2;
    int age2;

    std::cout<<"friend 2 write your name: ";
    std::getline(std::cin>>std::ws,name2);


    
    std::cout<<"friend 2 type your age";


    std::cin>>age2;

    
    std::cout<<"friend1 name is "<<name1<<"and age is "<<age1<<std::endl;
    std::cout<<"friend2 name is "<<name2<<"and age is "<<age2;



return 0;

}
