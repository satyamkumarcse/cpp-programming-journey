// make a function block that has introduction of a person then invoke it inside the main function.
// also, use some general variables from main fucntion.
#include <iostream>
using namespace std;

void introduction(string name,int age,string city, char initial){

    cout<<"my name is "<<name<<"\nI am "<<age<<" years old.\n"<<"i live in "<<city<<"\nMy initials are "<<initial;

}

int main(){
    string name = "satyam kumar singh";
    int age=18;
    string city="Delhi";
    char initial = 'S';

    introduction(name,age,city,initial);

    return 0;
}

