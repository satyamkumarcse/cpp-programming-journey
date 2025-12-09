// if we want to input/fill values in an array by taking user input, you have to still specify the size of the array.
// eg - string array1[5];


// as arrays are static data structures, while our program is running we cant change the size of the arrays. max size is stuck to 5
//  this might raise a problem, if we wish to enter more than 5 elements.
//  this is solved by dynamic memory concept, which we will discuss in future.

/*one disadvange of arrays is that they have a limited size. they are static.once you delare a size, you cant change it.

we set a limit of 5 in our program, but if during execution of program if the user wish to not use all the limits, the memory is wasted.

we will deal with this in dynamic memories and vectors later.

*/


 #include <iostream>
 using namespace std;

 int main(){

    // int array1[5];
    int array1[5]={};

    for(int i=0;i<5;i++){

        cout<<"enter the elements you want in the array : ";
        cin>>array1[i] ;
    }

    cout<<"the final array after entering the elements is : ";
    for(int elements : array1 )
    cout<< elements << " ";


    return 0;
 }