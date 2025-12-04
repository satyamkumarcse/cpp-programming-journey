/*

cout << (insertion operator)
cin >> (extraction operator)


*/


#include <iostream>

int main(){

    int age;
    std::string name;

    std::cout<<"what's your name "<<std::endl;

    std::cin>>name;


    std::cout<<"write your age ";

    std::cin>>age;


    std::cout<<"the name of the user is "<<name<<std::endl;
    std::cout<<"the age of the user is "<<age;


    return 0;

}

// a small problem is there, once we hit space, we will stop reading the string. (we cant basically input our full name)
