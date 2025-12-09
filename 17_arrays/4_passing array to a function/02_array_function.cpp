

#include <iostream>
using namespace std;

double getsum(double prices[],int size);

int main(){
    

    double prices[]={7.99,8.99,67.50,5.25,4.50};
    int size = sizeof(prices)/sizeof(prices[0]);
    double total  = getsum(prices,size);

    cout<<"total price is "<<total<<"$";


return 0;
}

double getsum(double prices[],int size){
    double total=0;


    for(int i=0;i<=size;i++){
        total+=prices[i];
    }
    return total;


}

/*

in conclusion, when you pass an array to main function block while calling it, you dont need a set of square brackets (line 11)

on the other size, when a user_defined function receives an array,it decays to a pointer and the function no longer knows what the size of the array is.

so we have to pass "int size" as an additional arguement(line 10)

*/