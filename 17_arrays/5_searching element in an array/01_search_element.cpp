
#include <iostream>
using namespace std;

int search_element(int target,int array1[],int size);


int main(){

    int array1[]={73,56,89,44,34,56,77};
    int target;
    int i;
    int size;
    int x;
    cout<<"enter the element you  want to  search: ";
    cin>>target;
    size = sizeof(array1)/sizeof(array1[0]);
    x=search_element(target,array1,size);

    if(x!=-1){
        cout<<"target element is at index: "<<x;

    }
    else{

        cout<<"target element not found in the array.";
    }


    return 0;
}



int search_element(int target,int array1[],int size){

    // int target;
    for(int i=0;i<size;i++){

        if(array1[i]==target){

            return i;
        }
        
    }
    return -1;
}

// the function block int search_element(int target,int array1[],int size) is technically linear search algorithm.

// in programming (-1) serves as sentinel value
// return -1 :  it simply means that something was not found