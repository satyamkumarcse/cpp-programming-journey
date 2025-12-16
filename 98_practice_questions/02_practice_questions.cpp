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


// 



// Provide three overloaded printValue routines that accept different types (integer, floating point, text). Call each overload and display the results.


// #include <iostream>
// using namespace std;

// void printValue(string name,int age);
// void printValue(int age);
// void printValue(double cgpa);


// int main(){

//     string name = "satyam";
//     int age = 18;
//     double cgpa = 9.56;

//     printValue(name,age);
//     printValue(age);
//     printValue(cgpa);




// return 0;
// }

// void printValue(string name,int age){

//     cout<<"my name is "<<name<<" i am "<<age<<" years old"<<endl;
    
// }

// void printValue(int age){

//     cout<<"my age is "<<age<<endl;

// }

// void printValue(double cgpa){

//     cout<<"my cgpa is "<<cgpa<<endl;

// }









// Write a function that computes the sum of elements of an integer array by traversing the array using pointer-style iteration. In comments explain why the array’s size reported inside that function differs from its size in main.



// #include <iostream>
// using namespace std;

// void arraysum(int array1[],int size);

// int main(){

//     int array1[]={1,2,3,4,5,6,7,8,9,10};
//     int size = sizeof(array1)/sizeof(array1[0]);
//     cout<<sizeof(array1)<<"\n";
//     arraysum(array1,size);




// return 0;
// }

// void arraysum(int array1[],int size){
//     int sum =0;
//     for(int i=0;i<size;i++){

//         sum+=*(array1 + i);


//     }


//     cout<<"sum of all the elements are: "<<sum<<endl;
//     cout<<sizeof(array1);


// }





// Implement an in-place string reversal routine (no standard library reverse). The routine should modify the original string passed from main. Demonstrate with examples.


// #include <iostream>
// using namespace std;

// void reversedstring(string &word);

// int main(){

//     string word;
//     cout<<"enter the word you want to reverse: ";
//     getline(cin,word);

//     reversedstring(word);
//     cout<<"the reversed word is: "<<word;


//     return 0;
// }


// void reversedstring(string &word){

//     int start = 0;
//     int end = word.length()-1;
//     char temp;

//     while(start<end){


//         temp = word[start];

//         word[start] = word[end];

//         word[end]=temp;

//         start++;
//         end--;
//     }

    

//     }

    
// alternate method to print reversed order, but it dont changes the vble. time space complexity is more .
//  #include <iostream>
//  using namespace std;

//  int main(){

//     string word="satyam";
//     int x = word.length();
//     for(int i=x;i>=0;i--){

//         cout<<word[i];
//     }


//     return 0;
//  }

//  However, you can store it if you really want to, but you have to pay a "memory tax." You need to create a brand new, empty string and fill it up.

// #include <iostream>
// #include <string>
// using namespace std;

// int main(){

//     string word = "satyam";
//     string reversed_copy = ""; 

//     int x = word.length();

//     // 2. Loop backwards
//     // Remember: Start at x-1 to avoid the "invisible" null character
//     for(int i = x - 1; i >= 0; i--){
        
//         // 3. Instead of printing, we ADD to the new bucket
//         reversed_copy += word[i]; 
//     }

//     // Now 'reversed_copy' actually holds the data
//     cout << "Original: " << word << endl;
//     cout << "Stored Copy: " << reversed_copy << endl;

//     return 0;
// }




// #notes:
/*

power utility - means the function that calculates power.

    Q) Create a power utility with multiple overloads: integer base with integer exponent, double base with integer exponent, and a single-argument overload that returns the square. Use these overloads in a test program.

*/


// #include <iostream>
// // #include <cmath>
// using namespace std;

// int power_utility_function(int base,int exponent1);
// double power_utility_function(double base2,int exponent1);
// int power_utility_function(int base);

// int main(){

//     int base = 5;
//     int exponent1=6;
//     double base2 = 3.45;

//     cout<<power_utility_function(base,exponent1)<<"\n";
//     cout<<power_utility_function(base2,exponent1)<<"\n";
//     cout<<power_utility_function(base);
    



// return 0;
// }

// int power_utility_function(int base,int exponent1){

//     int result =1;

//     for(int i=0;i<exponent1;i++){

//         result = result*base;
//     }

//     return result;

// }

// double power_utility_function(double base2,int exponent1){

//     double result =1;

//     for(int i=0;i<exponent1;i++){

//         result = result*base2;
//     }

//     return result;

// }

// int power_utility_function(int base){

//     return base*base;

// }



// Build a minimal banking simulation with routines to deposit, withdraw, and display balance. The routines should validate inputs (e.g., prevent negative withdrawal) and the main program should simulate a few transactions and print the final balance


// #include <iostream>
// using namespace std;

// void deposition(double &balance,double amount);
// void withdrawal(double &balance,double amount);
// void displaybalance(double balance);

// int main(){

//     double balance = 10000;
//     double deposit=0;
//     double withdrawn=0;
//     int operation;

//     deposition(balance,2000);
//     withdrawal(balance,1000);
//     withdrawal(balance,4000);
//     displaybalance(balance);

//     return 0;
// }

// void deposition(double &balance,double amount){

//     // cout<<"enter the amount you want to deposit : "<<endl;
//     //     cin>>amount;
//         if(amount<=0){
//             cout<<"sorry cant deposit negative amount!!"<<endl;


//         }
//         else{
//              balance +=amount;
//             cout<<"amount deposited is: "<<amount<<endl;
//             cout<<"new balance is: "<<balance<<endl;
    


//         }

// }

// void withdrawal(double &balance,double amount){

    
//     // double withdrawn;

    
//     // cout<<"enter the amount you want to withdraw : "<<endl;
//     // cin>>amount;     
    

//     if(amount<=0){

//         cout<<"cant withdraw negative values";
//     }
//     else if(amount<=balance){
//         balance -=amount;

        
//     cout<<"amount withdraw is: "<<amount<<endl;
//     cout<<"new balance is: "<<balance<<endl;
    


//     }

//     else if(amount>balance){
//         cout<<"not enough funds!!"<<endl;
//     }
    
// }

// void displaybalance(double balance){

//     cout<<"the balance is "<<balance<<endl;

// }



// Implement a routine that finds the maximum element of an integer array. In comments and in main, illustrate why measuring the array’s size via the type used in main differs from measuring it inside the routine.

// #include <iostream>
// using namespace std;

// void findmaxele(int array1[],int size);

// int main(){

//     int array1[]={13,23,25,64,57,38,92,14};
//     int size = sizeof(array1)/sizeof(array1[0]);
//     // cout<<"size of array1 is: "<<sizeof(array1)<<endl;
    
//     findmaxele(array1,size);
//     return 0;
    
// }

// void findmaxele(int array1[],int size){
//     // 


//     int highest_element = array1[0];

//     for(int i=0;i<size;i++){

//         if(array1[i]>highest_element){

//             highest_element = array1[i];
//         }

        
//     }

//     cout<<"the highest elements is: "<<highest_element;
    //cout<<"size of array1 is: "<<sizeof(array1)<<endl; //    error is shown. sizeof(array) works only where the array is declared.
// Once passed to a function, it becomes a pointer, and its size is lost.
    
  


// if the array is passed to a routine function, it decays to a pointer. the routine have no idea about size of array. size of array has to be passed as a parameter.







//Write a recursive routine that computes the sum of array elements. The routine should use an extra integer parameter to track the current index and return the accumulated result to main. Demonstrate correctness.


// #include <iostream>
// using namespace std;

// void findsum(int array1[],int size);

// int main(){

//     int array1[]={13,23,25,64,57,38,92,14};
//     int size = sizeof(array1)/sizeof(array1[0]);
//     // cout<<"size of array1 is: "<<sizeof(array1)<<endl;
    
//     findsum(array1,size);


//     return 0;
    
// }

// void findsum(int array1[],int size){
    
//     int sum=0;

//     for(int i=0;i<size;i++){

//         sum+=array1[i];


//     }

//     cout<<"the sum of elements are: "<<sum;

// }





//this gives correct answer, but its iterative approach. not recursive.
// lets write recursive routine.



// #include <iostream>
// using namespace std;

// int findsum(int array[],int size,int index);

// int main(){

//     int array[]={12,32,43,21,54,33,67,76,44};
//     int size = sizeof(array)/sizeof(array[0]);
//     int index;
//     int x = findsum( array, size, 0);
//     cout<<"the sum is: "<<x;





// return 0;
// }

// int findsum(int array[],int size,int index){

//     if(size==index){

//         return 0;
//     }
    

//     return array[index] + findsum( array,size,(index + 1));    // It does NOT add 32 here.
// // It waits for the next call to return.

    
 
// }




// Given a fixed 2-D array (for example, 5×5), write a routine that returns (a) the total number of elements and (b) the total memory in bytes occupied by the whole 2-D array. Print both from main.



// #include <iostream>
// using namespace std;

// void arrayinfo(int array_2d[][5],int row_size);

// int main(){

//     int array_2d[][5] = {{12,34,56,78,55},{34,67,89,65,44},{87,45,68,34,75},{12,45,64,24,77},{45,65,78,65,33}};
//     int row_size = sizeof(array_2d)/sizeof(array_2d[0]);
    
//     arrayinfo(array_2d,row_size);


//     return 0;
// }

// void arrayinfo(int array_2d[][5],int row_size){

//     int colume_size = 5;


//     int total_element = row_size*colume_size;


//     cout<<"total elements are: "<<total_element<<"\n";
//     cout<<"the memory occupied in bytes is: "<<sizeof(int)*total_element;



// }


/*

Build a number-analysis tool composed of small routines:
one routine that returns a random even integer in a specified range,
one routine that tests primality, and
one routine that prints all primes in a given inclusive interval.
Use these routines together in main and also include short comments that demonstrate local vs block scope and display the size (in bytes) of any structure or composite used.
Primality refers to the property of a number being prime.


*/



#include <iostream>
#include <ctime>
using namespace std;

int randominteger(int l,int u);
void primality(int prime);
void primeinterval(int x,int y);

int main(){
    int operation;
    int l;
    int u;
    int prime;
    int x;
    int y;

    srand(time(NULL));

    cout<<"enter the test you want to peform (1/2/3) -- (test primality/printing primes of interval /random integer in interval) : ";
    cin>>operation;

    if(operation==3){
    cout<<"enter lower limit of range you want to generate random number on: ";
    cin>>l;
    cout<<"enter upper limit of range you want to generate random number on: ";
    cin>>u;
    randominteger(l,u);




    }
    else if(operation==1){

        cout<<"enter the number you want to test primality of: "<<endl;
        cin>>prime;
        primality(prime);
    }
    else if(operation==2){
       

        cout<<"enter the range's lower limit: ";
        cin>>x;
        cout<<"enter the range's upper limit: ";
        cin>>y;
        primeinterval(x,y);



    }


    return 0;
}



int randominteger(int l, int u) {
    if (l > u) {
        cout << "invalid range" << endl;
        return -1; 
    }
    
    int k;
    do {
        k = rand() % (u - l + 1) + l;
    } while (k % 2 != 0);
    
    return k;
}

void primality(int prime){

    for(int i=2;i<=prime-1;i++){

        if(prime%i==0){

            cout<< "its not a prime number"<<endl;
            return;

        }

    }
    cout<<"its a prime number"<<endl;
    

}

void primeinterval(int x,int y){
    int j;
    int i;
    

       

        

    for(j=x;j<=y;j++){
        bool isprime = true;    // declaration

        if(j<2){
             isprime = false;       // dont write "bool is prime = false"  that re declares the vble.
        }
        

        else{
            
             for(i=2;i<=j-1;i++){

            if(j%i==0){

                isprime = false;
                break;   

        }
        





        }

        }


        if(isprime==true){
        cout<<j<<" is a prime number"<<endl;
    }
        else{
            cout<<j<<" is not a prime number"<<endl;

        }
    
        
       
        
        

    }
    

    }
    
    

    
    










    
 
    
    


    





