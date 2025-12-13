// 1)  Write a function to return the larger of two integers.

/*

Use:

Function with two parameters

const parameters

Return the largest value

*/





// #include <iostream>
// using namespace std;

// int larger_number(const int x,const int y);

// int main(){

//     int x;
//     int y;

//     cout<<"enter the first number: ";
//     cin>>x;
//     cout<<"enter the second number: ";
//     cin>>y;

//     // larger_number(x,y); (this just invokes the function, does not print on scrren)

//     cout<<larger_number(x,y);   /// for printing on screen use cout.



//     return 0;
// }

// int larger_number(const int x,const int y){

//     // x=100;    // shows error: assignment of read-only parameter 'x'


//     // if(x>y){

//     //     return x;
//     // }
//     // else{

//     //     return y;
//     // }


//     return x>y ? x:y;     // shorter alternate

// }





//  2) Write a function swapValues(int &a, int &b) to swap two numbers using pass-by-reference.

// Call the function and display values before and after swap. 




// #include <iostream>
// using namespace std;

// void swapvariables(int &x,int &y );

// int main(){

//     int x=23;
//     int y=56;

//     cout<<"before swapping: "<<"\n";
//     cout<<x<<"\n";
//     cout<<y<<"\n";

//     swapvariables(x,y);

//     cout<<"after swapping: "<<"\n";
//     cout<<x<<"\n";
//     cout<<y<<"\n";




//     return 0;
// }

// void swapvariables(int &x, int &y){

//     int temp = x;
//     x = y;
//     y = temp;

// }




/*
Write a program that prints the memory size (in bytes) of the following types and objects: one int, one double, one char, and an array of 10 integers. Use a function to produce the results.

*/


// #include <iostream>
// using namespace std;

// int arraysize(int array1[],int size);

// int main(){

//     int array1[]={1,2,3,4,5,6,7,8,9,10};

//     int size = sizeof(array1);

//     int x = arraysize(array1,size);

//     cout<<x;




// return 0;
// }


// int arraysize(int array1[],int size){

//     return size;


// }




// 5) Demonstrate the difference between a global variable and a local variable with a function that declares a local variable with the same name as a global; print both values to show scope rules.


// #include <iostream>
// using namespace std;

// int x=100;

// int main(){

//     int x=200;

//     cout<<x<<"\n";    // local v'ble prioritised over global.
//     cout<<::x<<"\n";  // this prints the global v'ble.

// return 0;
// }






 


//6) Implement a set of overloaded routines named area to compute area for: a circle, a rectangle, and a triangle. Write a short driver that calls each variant with example inputs and prints results.



// #include <iostream>
// using namespace std;


// double area(double r);
// double area(int base,double height);
// double area(int l,int b);


// int main(){


//     double r=4;
//     int base=4,c,l=10,b=15;
//     double height =3;
//     // const double pi = 3.1415;

//     double x = area(r);
//     cout<<"area of circle is : "<<x<<" cm^2"<<"\n";

//     double y = area(base,height);
//     cout<<"area of triangle is: "<<y<<"\n";

//     double z = area(l,b);
//     cout<<"area of rectangle is: "<<z<<"\n";


//     return 0;
// }

// double area(double r){       // function signature : double double double 


//     return 3.1415*r*r;
// }

// double area(int base,double height){         // double int double 


//     return base*height/2;
// }

// double area(int l,int b){                      // double int int 


//     return l*b;
// }

// // in all 3 cases fxn signature is unique.







// Write a routine that accepts a name and prints a greeting. Ensure the routine is efficient with speed & memory. and is for read-only use of the passed string and explain your parameter choice in comments.


// #include <iostream>
// using namespace std;

// void greetings(const string &name);

// int main(){

//     string name;

//     cout<<"enter your name: "<<"\n";
//     getline(cin,name);

//     greetings(name);

//     return 0;
// }

// void greetings(const string &name){

//     // string name = "manish";    // shows error

//     cout<<"hello "<<name<<" good morning"<<" how can i help you??!";
    
// }

// we used const keyword in front of the string datatype. it make the name varibale read only. it cant be changed easily. increases security.
// '&' passes the memory address instead of creating a copy of the string, 
// which is more efficient for large objects like strings. reduces memory load.




// Write a function that returns the number of digits in a non-negative integer. In your main program, call it for several values and also print the storage size (in bytes) of the integer variable used to hold the value.



// #include <iostream>
// using namespace std;

// int returnsize(int n1);

// #include <iostream>
// using namespace std;

// int main(){

//     int n1 = 4254343;
//     int x= returnsize(n1);
//     cout<<"the total number of digits is: "<<x<<"\n";
//     cout<<"the storage size is: "<<sizeof(x);


//     return 0;
// }

// int returnsize(int n1){

//     int count =0;

//     if(n1==0){

//         return 1;
//     }
//     while(n1>0){

//          n1 = n1/10;
//         count++;



//     }
//            return count;
//     }

// # drawback, will take only 1 input.









// #include <iostream>
// using namespace std;

// int returnsize(long long n);


// int main(){

//     int n1 = 425343;
//     long long n2 = 9423432254343;
//     long long n3 = 0;
//     int x1 = returnsize(n1);
//     int x2 = returnsize(n2);
//     int x3 = returnsize(n3);
//     cout<<"the total number of digits is: "<<x1<<"\n";
//     cout<<"the storage size is: "<<sizeof(n1)<<"\n";


//     cout<<"the total number of digits is: "<<x2<<"\n";
//     cout<<"the storage size is: "<<sizeof(n2)<<"\n";


//     cout<<"the total number of digits is: "<<x3<<"\n";
//     cout<<"the storage size is: "<<sizeof(n3);


//     return 0;
// }

// int returnsize(long long n){

//     int count =0;

//     if(n==0){

//         return 1;
//     }
//     while(n>0){

//          n = n/10;
//         count++;


//     }
//            return count;


//     }


