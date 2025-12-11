// multidimentional arrays or more specifically 2d arrays
// 2d_array = {array1,array2,array3}
// 2d arrays = an array made up of seprate arrays 
// they are useful because they can represent grid or matrix of data with rows and columns.

/*

array_1d[3];    --> 1d array having total number of elements as 3
array_2d[3][4]    --> 2d array having 3 rows and 4 columns. 3*4=12. so total 12 elements.
array_2d[][4]  ---> its not compulsory to set row size, but setting up columns size is comulsory.



*/


// lets a create a 2d array with 3 columns.
// 1st row (1st array) : cars made my ford company
// 2nd row (2nd array) : cars made by chevorlte
// 3nd row (3nd array) : cars made by audi
// here in our example each row correspounds to a manufacturer


#include <iostream>
using namespace std;

int main(){

    string cars[][3] = {{"mustang","escape","f-150"},
                    {"corvette","equinox","silverado"},
                    {"challenger","durange","ram-1500"}};
    cout<<cars[0][0]<<" ";
    cout<<cars[0][1]<<" ";
    cout<<cars[0][2]<<endl;

    cout<<cars[1][0]<<" ";
    cout<<cars[1][1]<<" ";
    cout<<cars[1][2]<<endl;

    cout<<cars[2][0]<<" ";
    cout<<cars[2][1]<<" ";
    cout<<cars[2][2]<<endl;


return 0;
}