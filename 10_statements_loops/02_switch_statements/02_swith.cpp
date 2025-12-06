#include <iostream>

int main(){

    char grade;

    std::cout<<"enter your grade : ";
    std::cin>>grade;

    switch(grade){

        case 'S':
        std::cout<<"you did great";
        break;

        case 'A':
        std::cout<<"you did good";
        break;

        case 'B':
        std::cout<<"you did above average";
        break;

        case 'C':
        std::cout<<"you did average";
        break;

        case 'D':
        std::cout<<"you did bad, do better next time";
        break;

        case 'E':
        std::cout<<"you barely passed!!";
        break;

        case 'F':
        std::cout<<"you failed the subject";
        break;

        default:
        std::cout<<"please enter only in a letter grade format (A-F)";



    }


    return 0;
}