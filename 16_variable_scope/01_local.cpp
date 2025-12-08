/*

local variables = declared inside a function or block of curly braces {}
eg- {} of the main function or any other function

global variables = declared outside of all functions
usaually written or declared at top of a program.

*/

/*
note_ functions can't see inside of other functions


*/




// {first code}





// #include <iostream>
// using namespace std;

// void printnum(int mynum);

// int main(){

//     int mynum = 1;

//     // cout<<mynum;
//     printnum(mynum);

//     return 0;

// }

// void printnum(int mynum){

//     cout<<mynum;
// }

// the code written above works but the code written below dont



// {second code}



#include <iostream>
using namespace std;

void printnum();

int main(){

    int mynum = 1;

    // cout<<mynum;
    printnum();

    return 0;

}

void printnum(){

    cout<<mynum;
}

// this happens because
/*

note : functions can't see inside of other functions.

the function "print num" has no idea what this mynum variable is because "mynum" is a local variable to the "main" function. 


that's why we have to pass arguements to functions (like we did in the first code)



*/