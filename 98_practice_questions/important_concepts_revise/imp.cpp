// //  string to int
//  #include <iostream>
//  using namespace std;


//  int main(){

//     string a = "4927490";
//     int y;
//     for(int i=0;i<a.length();i++){

//       y = a[i] - '0';
//       cout<<y;


//     }
     


//     return 0;
//  }



// a string digits 45 --> 4 + 5

// return number%10 + (number/10)%10




//  #include <iostream>
//  using namespace std;

// int getnumber1(int x){             // helper function.

//    return x*x;
// }

// int getnumber2(){                  // main function for helper function
//    int y;

//    y = getnumber1(30);

//    return y;

// }

//  int main(){                      //main function for both
  
//    int result;

//    result = getnumber2();

//    cout<<result;


//     return 0;
//  }



// in C++, you must use char when accessing a single letter from a std::string.
// Why do we use char?
// A string in C++ is basically an array of characters. It is a chain of small boxes, and inside each box is exactly one char.

// When you write word[0], you are opening the first box. The thing inside that box is defined as a char.



/*

break can be used ONLY inside:
for
while
do-while
switch

You are inside a function, not a loop.
To stop execution of a function, you must use:
return;
*/