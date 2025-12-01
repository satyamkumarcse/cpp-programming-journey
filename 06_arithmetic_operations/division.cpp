#include <iostream>
int main(){

    // int students = 20;
    double students = 20;

    // students /= 2;
    students /= 3; //(output is 6, not 6.66667) decimal part is truncated. change int student to double students to retain it.
    // students = students/2;

    std::cout<<students;




    return 0;
}
