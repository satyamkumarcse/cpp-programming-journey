/*
switch is an alternative to using many "else if" statements, it compares one value against many matching cases.


eg- you have a task of entering input values from 1-12, and printing the correspounding months of the years. this will require more than 10 "else if" blocks, which is simply inefficient. we can use switch concept here.
*/





/*

switch(){
}

in curly braces(), what values we like to examine against matching cases will be written. 


here "month".



for no case is matches use:
(similar to else)
default: 

*/


#include <iostream>

int main(){
    int month;


    std::cout<<"enter the month (1-12)";
    std::cin>>month;

    switch(month){


        case 1:
        std::cout<<"its january";
        break;
        case 2:
        std::cout<<"its february";
        break;
        case 3:
        std::cout<<"its march";
        break;
        case 4:
        std::cout<<"its april";
        break;
        case 5:
        std::cout<<"its may";
        break;
        case 6:
        std::cout<<"its june";
        break;
        case 7:
        std::cout<<"its july";
        break;
        case 8:
        std::cout<<"its august";
        break;
        case 9:
        std::cout<<"its september";
        break;
        case 10:
        std::cout<<"its october";
        break;
        case 11:
        std::cout<<"its november";
        break;
        case 12:
        std::cout<<"its december";
        break;
        default:
        std::cout<<"please input numbers between (1-12)";
        
    }
    int year;

    

return 0;
}
