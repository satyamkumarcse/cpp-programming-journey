/*variables is representation of some number of value.
 eg- x + 5 = 9 , so x =4 here 
*/

/*there are 2 steps for creating and using a variable in cpp

1) declaration 
2) assingment

*/

/*in order to declare a variable, we need to list the data type of of what were storing exactly.

we can store numbers,characters,whole sentences*/


#include <iostream>
int main(){


    int x; //decleration

    x = 5; //assingment

    //the following can also be combined in 1 step 

    int y = 6;

    int sum = x+y ;

    std::cout<<x<<std::endl;
    std::cout<<y<<std::endl;
    std::cout<<sum<<std::endl;

    return 0;

}