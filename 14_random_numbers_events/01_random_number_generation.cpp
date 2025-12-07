/*

in order to work with random number we may need to include the header file:
 #include <ctime>

 */



 // the random numbers that we generate (appear to us), are not actually random numbers. these are pseudo-random.

 // pseudo-random = NOT truly random (but-close)

 // we use srand() function for generating random numbers.


 /*

random number generator is initialised by using srand();
inside the curly braces we need a seed. programmers use current calender time as a seed.

to generate a random number we invoke rand() function

using the rand() function, a random number is generated between 0 to 32767. we can also provide a range to the output number using %.

rand() % 6; 

% = modulus operator. it yields the remainder. 
the number which is generated is divided by 6 and the remainder that we get is out output range.

rand() % 6; = range 0 to 5
(rand() % 6) + 1 = range 1 to 6 {in case we are simulating a die}
 */ 

 #include <iostream>
 #include <ctime>
using namespace std;

 int main(){
    srand(time(NULL));
    int num = (rand() % 6) + 1;
    // int num = (rand() % 20) + 1;  {random number is generated between 1 to 20}
    // int num = (rand() % 100) + 1; {between 1 to 100}
    cout<<num;


    return 0;
 }
 





