// the user will be promted to take input 5 times, computer will have its turn 4 timmes.

#include <iostream>
#include <ctime>
using namespace std;

string computerchoice();

int main(){
    string choice;

    cout<<"enter your choice (X/O) : ";
    cin>>choice;




return 0;
}

string computerchoice(){

    srand(time(0));
    int x = rand()%2;

    if(x==0){

        return "computer's choice was O";
    }
    else{

        return "computer's choice was X";

    }


}