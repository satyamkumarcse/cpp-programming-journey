// make a CPP program using all datatypes and print them on a new line 

#include <iostream>
int main() {
    int x=5;
    int y =6;
    int sum = x+y;
    std::cout << sum << " is the sum of x and y"<<std::endl;

    bool student = true;
    bool phd_scholar = false;

    std::cout<<student<<std::endl;  // (true prints 1 )
    std::cout<<phd_scholar<<std::endl; // (false print 0)

    double sgpa = 9.45;

    std::cout<<sgpa<<std::endl;

    char grade = 'S';
    char initials = 'P';
    std::cout<<grade<<std::endl;
    std::cout<<initials<<std::endl;

    std::string name = "satyam";
    std::string standard = "1st year btech";

    std::cout <<"hello my name is "<<name<<" im currently in "<<standard;

    return 0;

}



    

    






