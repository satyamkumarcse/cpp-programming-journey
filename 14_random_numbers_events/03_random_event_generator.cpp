// random event generator using random numbers and a switch-CASE concept.
// it has applications during game development.
// header file #include <ctime> is required.
// is srand(time(0)); and srand(time(NULL)); are performing functions the same in cpp in most non complex cases.
//  srand(time(0)); = uses current time as a seed to generate random numbers.
// real life - lucky wheel / lottery ticket simulations

#include <iostream>
#include <ctime>
using namespace std;

int main(){
    srand(time(0));
    int i = rand() % 5 + 1;
    switch(i){
        case 1:cout<<"you won a free lunch\n";
        // break;
        case 2:cout<<"you won a gift card\n";
        // break;
        case 3:cout<<"you won a free concert ticket\n";
        // break;
        case 4:cout<<"you won a free flower pot\n";
        // break;
        case 5:cout<<"you won a free solar cooker \n";
        // break;

/*
switch only has one input (i), but once a matching case is found, execution just continues line by line until a break (or return, etc.) stops it. This is called fallthrough and is why multiple prizes can be printed if you remove the breaks.
*/

    }


    return 0;
}


