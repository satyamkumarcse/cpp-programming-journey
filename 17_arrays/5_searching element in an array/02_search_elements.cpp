// searching by iterating over an array of string.


#include <iostream>
using namespace std;

string searchelement(string fooditems[],string target,int size);

int main(){
    string fooditems[]={"burger","pizza","chowmine","chilly potato","egg roll","manchurian"};
    string target;
    int size;
    string output;
    cout<<"enter the food item you want to search for in the menu.: ";
    getline(cin,target);
    size = sizeof(fooditems)/sizeof(fooditems[0]);
    output = searchelement(fooditems,target,size);
    cout<<output;



    return 0;
}

string searchelement(string fooditems[],string target,int size){

    for(int i=0;i<size;i++){
        if(fooditems[i]==target){

            return "the food item is present you can place your order!!!";
        }
    
    }
    return "sorry the food  item is not available right now!!!";

}