#include <iostream>
using namespace std;

int main(){
    string name;

    do{
        cout<<"do you want to play the again (yes/no): ";
        cin>>name;
    }while(name=="no");

    cout<<"lets start the game now!!!!!";



    return 0;
}