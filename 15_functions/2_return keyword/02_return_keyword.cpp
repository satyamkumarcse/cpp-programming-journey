// program to return volume of cube, if we know length of a side

#include <iostream>
using namespace std;

double volume_of_cube(double length){

    return length*length*length;
}

int main(){
    double length = 6;
    double volume = volume_of_cube(length);
    cout<<"the volume is: "<<volume<<"cm^3";



    return 0;
}