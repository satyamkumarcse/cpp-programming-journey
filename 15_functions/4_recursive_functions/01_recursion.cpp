// void doSomething(){

//     doSomething();

// }



// recursion = its a programming technique where a function invokes itself from within.
// a complex concept is broken into single repeatable step.
// eg- finding factorial/fibnoaaci sum.

// (iterative vs recursion)

// advantages of iterative :

// less code and is cleaner.
// useful for sorting and searchinng algorithms

// disadvantages:

// uses more memory and is slower.








// factorial by iteration 

/*
 #include <iostream>
 using namespace std;

 int main(){

    int x=1;
    int number;

    cout<<"enter the number you want to find factorial of:  ";
    cin>>number; 

    for(int i=1;i<=number;i++){

        x*=i;
    }

    cout<<"the factorial is: "<<x;


    return 0;
 }
*/


//  factorial by recursion 


 #include <iostream>
 using namespace std;

 int factorial(int number);

 int main(){


    int number=1;

    int x = factorial(6);
    cout<<x;





    return 0;
 }

int factorial(int number){

    if(number==0){

        return 1;
    }
    else{

        return number*factorial(int(number-1));


    } 
    

}