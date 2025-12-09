/*
sizeof() = this operator determines the size in bytes of a : variable,data type,class,objects,etc..
 */

#include <iostream>
using namespace std;

int main(){

string name="satyam huoowhfdiwufuiwbwf";
double gpa = 9.34;
char grade = 'A';
bool student = true;
char grades[]={'A','B','C','D','F'};
string students[]={"satyam","ramesh","suresh","ganesh"};
cout<< sizeof(gpa) <<" bytes\n";
cout<< sizeof(double) <<" bytes\n";
cout<< sizeof(name) <<" bytes\n";
cout<< sizeof(grade) <<" bytes\n";
cout<< sizeof(student) <<" bytes\n";
cout<< sizeof(grades) <<" bytes\n";
// cout<< sizeof(grades)/sizeof(grades[0]) <<" elements\n";
cout<< sizeof(grades)/sizeof(char) <<" elements\n";
cout<< sizeof(students) <<" bytes\n";
cout<< sizeof(students)/sizeof(string) <<" students\n";

return 0;
} 

//output : 8
//the size of my gpa variable is 8 bytes. (double)
//this is also the max size allocated to a double variable.
// this will be helpful in future when we work with arrays.
// even if we change the length of the string literal that we have written, the bytes output will be same.

// the size of string = 32/24 bytes.
// double = 8 bytes
// char = 1 byte
// bool = 1 byte
// char takes 1 byte of memory, array having 5 char = 5 bytes
// array of char datatype having 5 elements = 1*5 = 5 bytes
// we can find size of array using this logic.
//  sizeof(grades)/sizeof(char) = 5 elements

