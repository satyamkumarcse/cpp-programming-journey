//  returns both area and volume 

#include <iostream>
using namespace std;

double volume_of_cube(double length){

    return length*length*length;
}

double area_of_cube(double length){

    return length*length;
}

int main(){
    double length = 6;
    double volume = volume_of_cube(length);
    double area = area_of_cube(length);
    cout<<"the volume is: "<<volume<<"cm^3\n";
    cout<<"the area is: "<<area<<"cm^2";



    return 0;
}