//  string to int
//  #include <iostream>
//  using namespace std;


//  int main(){

//     string a = "4927490";
//     int y;
//      y = a[0] - '0';
//     cout<<y;


//     return 0;
//  }

// a string digits 45 --> 4 + 5

// return number%10 + (number/10)%10




 #include <iostream>
 using namespace std;

int getnumber1(int x){             // helper function.

   return x*x;
}

int getnumber2(){                  // main function for helper function
   int y;

   y = getnumber1(30);

   return y;

}

 int main(){                      //main function for both
  
   int result;

   result = getnumber2();

   cout<<result;


    return 0;
 }
