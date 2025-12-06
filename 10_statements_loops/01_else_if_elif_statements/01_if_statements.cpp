/*
if(){}

if some condition/statement written under the parenthesis if() is true we will run some set of code {}

else if(){}

else{}, finally condition so, no ()

*/





#include <iostream>

int main(){

    int age;

    std::cout<<"enter your age: "<<std::endl;
    std::cin>>age;


    if(age>100){
        std::cout<<"you are too old to enter this site";
    }

    else if(age>=18){
        std::cout<<"welcome to the site";
    }

    else if(age<0){
        std::cout<<"you have not born yet!!";
    }
    

    else{
        std::cout<<"you are not allowed to enter";
    }

    return 0;
}