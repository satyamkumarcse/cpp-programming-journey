/*
 outer loop - number of rows
 inner loop - number of columns

hw - create rectangle shape out of a given symbol
*/



#include <iostream>
using namespace std;


int main(){
    int rows;
    int columns;
    char symbol;

    cout<<"enter the number of rows: ";
    cin>>rows;

    cout<<"enter the number of columns: ";
    cin>>columns;

    cout<<"enter the symbol: ";
    cin>>symbol;


    for(int i=0;i<rows;i++){

        for (int j=0;j<columns;j++){

            cout<<symbol<<" ";
        }
        cout<<"\n";
    }




return 0;


}