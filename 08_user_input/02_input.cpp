/* 
in order to include whitespaces within the input string, we can use getline function. 

std::getline(std::cin,variable);

*/



#include <iostream>

int main(){
    std::string name;
    int age;


    std::cout<<"wrtie your full name"<<std::endl;
    std::getline(std::cin,name);

    


    

    std::cout<<"write your age ";

    std::cin>>age;

    std::cout<<"the age of the user is "<<age<<std::endl;
    std::cout<<"your full name is "<<name<<std::endl;



    return 0;
}
//here getline was used first, after that user input was taken.
//now we will do reverse, and see the output