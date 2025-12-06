//1. Take two numbers from the user and print their sum, difference, product, quotient, and remainder

// #include<iostream>
// #include<cmath>
// #include<vector>
// using namespace std;

// int main(){
//     int a;
//     int b;
//     int operation;


//     cout<<"enter first number (a): ";
//     cin>>a;

//     cout<<"enter second number (b): ";
//     cin>>b;

//     cout<<" enter 1/2/3/4/5 for finding sum,difference,product,quotient and remainder.";
//     cin>>operation;

//     if(operation==1){

//         cout<< a+b; 
//     }
//     else if(operation==2){

//         cout<< a-b; 
//     }
//     else if(operation==3){

//         cout<< a*b; 
//     }
//     else if(operation==5){

//         cout<< a%b; 
//     }

//     else if(operation==4){
//         if(b==0){

//             cout<<"cant divide by zero";
//         }
//         else{
//              cout<< a/(double)b; 


//         }
//     }

//     else{


//         cout<<"invalid operation";
//     }


//     return 0;


// }

// 2. Input a character and check whether it is a vowel, consonant, digit, or special character.

// int main(){

//     char x;

//      cout<<"input a character : ";
//      cin>>x;
     

//      if(x=='a' || x=='e' || x=='i'|| x=='o'|| x=='u'){

//         cout<<"it is a vowel";

//      } 
//     else if (x>='a' && x<='z'){

//         cout<<"its a consonant";


//     }
//     else if(x>='0' && x<='9'){

//         cout<<"its a digit";

//     }
//     else{


//         cout<<"its a special character";
//     }




//     return 0;
// }

// In ASCII:

// Characters 'a' to 'z' are stored as integer values 97 to 122

// Characters 'A' to 'Z' are stored as integer values 65 to 90

// Digits '0' to '9' are 48 to 57

// 3. Input a floating-point number and print its integer form, its square root, and its cube.

// int main(){

//     float a;
//     int b;
//     float c;
//     float d;
//     cout<<"enter a float value : ";
//     cin>>a;

//     b = (int)a;
//     c = pow(a,0.5);
//     d=pow(a,3);

//     cout<< b<<"\n";
//     cout<< c<<"\n";
//     cout<< d<<"\n";





//     return 0;
// }


// 5. Ask the user for three numbers and print the largest among them using one line of code.

// #include <algorithm>
// int main(){

//     int a;
//     int b;
//     int c;

//     cout<<"enter 3 numbers\n(a) : ";
//     cin>>a;
//     cout<<"(b) : ";
//     cin>>b;
//     cout<<"(c) : ";
//     cin>>c;

//     // cout<< max(a,max(b,c));

//     if(a>=b && a>=c){

    

//             cout<<a;
//         }
    
//     else if(b>=a && b>=c){

        

//             cout<<b;
    
//     }
//     else{



//         cout<<c;
//     }


    

//     return 0;
// }

//  . Input a string and print its length, first character, last character, and whether its length is even or odd.


// #include<iostream>

// using namespace std;



// int main(){
//     string s;

    
//     do{

//         cout<<"enter a string literal";
//         getline(cin,s);
//         if(s.length()==0){

//             cout<<"please enter a string literal, you cant leave it empty.\n";
                            
//         }
        

        
//         else{

                
//             cout<<"the lenght of input string is: "<<s.length()<<"\n";
//             cout<<"the first character of input string is: "<<s.at(0)<<"\n";
//             cout<<"the last character of input string is: "<<s.at(s.length()-1)<<"\n";

            
//             if(s.length()%2==0){


//                 cout<<"length is even";
//             }
//             else{



//                 cout<<"length is odd";
//             }


        
        

//         }


        
        
//         }while(s.length()==0);




    











//         return 0;
// }
    

// // 8. Input a number n and print all even numbers from 1 to n.

// #include<iostream>

// using namespace std;



// int main(){
//     int n;
    


//     cout<<"enter a number n: ";
//     cin>>n;

//     for(int i=1;i<=n;i++){

//         if(i%2==0){
//             cout<<i<<"\n";


//         }



        

//     }








//     return 0;
// }



// 9. Ask the user to repeatedly enter a positive number until they actually enter a positive number



// #include<iostream>

// using namespace std;



// int main(){
//     int a;



//     do{
//         cout<<"enter a positive number: ";
//         cin>>a;



    
//     }while(a<=0);

//     cout<<"the positive number that you entered was: "<<a;






//     return 0;
// }

// 10. Print the multiplication table of any number the user provides.




// #include<iostream>

// using namespace std;



// int main(){
//     int a;
//     int i;
//     cout<<"enter the number whose table you want to print: ";
//     cin>>a;

//     for(i=1;i<=10;i++){
//         cout<<a<<" X "<<i<<" = "<<a*i<<"\n";
    


//     }







//     return 0;
// }


// 11. Input a number and count how many digits it contains.


// #include<iostream>

// using namespace std;



// int main(){
//     string x;
//     int y;
//     cout<<"enter a number : ";
//     cin>>x;

//     y= x.length();
//     cout<<"the length is: "<<y;







//     return 0;
// }

// 12. Input a string and count how many vowels and consonants it has.



// #include<iostream>

// using namespace std;



// int main(){
//     string y;
//     int consonants = 0;
//     int vowel = 0;
//     int i;
    
//     std::cout<<"enter a string sentence : ";
//     getline(cin,y);

//     for(i=0;i<=y.length()-1;i++){
//         char x=y.at(i);




        
//     if(x=='a' || x=='e' || x=='i' || x=='o' || x=='u' ||
//     x=='A' || x=='E' || x=='I' || x=='O' || x=='U'){

//         vowel++;


//     }
//     else if(x>='a' && x<='z' || x>='A' && x<='Z'){


//         consonants++;
//     }

//     }

//     std::cout<<"total number of vowels are: "<<vowel<<endl;
//     std::cout<<"total number of consonants are: "<<consonants;


//     return 0;
// }

// 13. Print numbers from 1 to 20 but skip all multiples of 3.



// #include<iostream>

// using namespace std;



// int main(){
//     int i;

//     for(i=1;i<=20;i++){
//         if(i%3==0){

//             continue;


//         }
//         else{

//             cout<<i<<"\n";



//         }





//     }









//     return 0;
// }



//  stop if input is non zero for the user.


// #include<iostream>

// using namespace std;



// int main(){
//     int i;


//     do{cout<<"enter any number except 0: ";

//        cin>>i;
//     }while(i==0);


    




//     return 0;

// }

// 14. Continuously take numbers from the user. Stop only when the user enters 0.


// #include<iostream>

// using namespace std;

// int main(){
//     int i;


//     do{cout<<"enter any number except 0: ";

//        cin>>i;

//     }while(i!=0);

//     return 0;

// }

// 15. Print a star pattern with increasing rows. Number of rows should be user input.
/*

*
**
***
****

*/

// #include<iostream>

// using namespace std;

// int main(){
//     int rows;
//     cout<<"enter the number of rows you want to print: ";
//     cin>>rows;


//     for(int i=1;i<=rows;i++){
//         for(int j=1;j<=i;j++){

//             cout<<"*";
//         }
//         cout<<"\n";


//     }





//     return 0;
// }

/*

1
12
123
1234


*/


// #include<iostream>

// using namespace std;

// int main(){



//     int rows;
//     cout<<"enter the number of rows you want to print: ";
//     cin>>rows;


//     for(int i=1;i<=rows;i++){
//         for(int j=1;j<=i;j++){

//             cout<<j;
//         }
//         cout<<"\n";


//     }



//     return 0;
// }


// #include<iostream>

// using namespace std;

// int main(){
//     int range;
//     int i;
//     int j;
//     bool is_prime;

//     cout<<"enter a number range, till where you want to print prime numbers. ";
//     cin>>range;

//     if(range<2){

//         cout<<"no prime nos exist in this range";
//     }

//     for(i=2;i<=range;i++){
//         is_prime = true;
//         for(j=2;j<i;j++){
//             if(i%j==0){
//                 is_prime=false;
//                 break;
        
//             }
//         }
//         if(is_prime){


//             cout<<i<<"\n";
//         }

//     }
//     return 0;
// }

//  Create two namespaces with a variable of the same name in each. Print both variables.


// #include<iostream>

// using namespace std;

// namespace first{

//     int x=5;
// }


// namespace second{

//     int x=10;
// }

// int main(){

//     cout<<first::x<<"\n";
//     cout<<second::x;





//     return 0;
// }

// 19. Create a type alias for a long integer and use it to add two very large integers.

// "int" (has a specific range). for very large number we use "long long"


// #include<iostream>

// using namespace std;
// typedef long long t;

// int main(){
//     t x=84768472992482240;
//     t y=84768472874790840;
//     cout<<x+y;

//     return 0;
// }


// 20. Build a menu-driven program with options for addition, square root, and reversing a number.


// #include<iostream>
// #include<cmath>

// using namespace std;

// int main(){
//     int a;
//     int b;
//     int c;
//     int d;
//     int i;
//     int j;
//     string z;
//     string e;
//     string y;

    
//     cout<<"enter 1/2/3 for operation add/sqrt/reversing the number : ";
//     cin>>c;

//     if(c==1){
//         cout<<"enter a number (a): ";
//         cin>>a;
//         cout<<"enter a number (b): ";
//         cin>>b;


//         cout<<a+b;
//     }
//     if(c==2){

//         cout<<"enter the number you want to find sqrt of: ";
//         cin>>d;
//         cout<<pow(d,0.5);

//     }
//     if(c==3){
//         cout<<"enter a number (e): ";
//         cin>>e;
//         for(i=e.length()-1;i>=0;i--){

        

//                 y = e.at(i);
//                 cout<<y;


//             }
            




//         }
        
// return 0;

//     }

// 21. Input a sentence and count spaces, uppercase letters, and lowercase letters.


// #include<iostream>
//

// using namespace std;

// int main(){
//     string s;
//     int uppercase=0;
//     int lowercase=0;
//     int spaces=0;
//     int i;
//     int j;
//     char k;
//     cout<<"enter a string sentence: ";
//     getline(cin,s);
//     i = s.length();

//     for(j=0;j<=i-1;j++){
//         k = s.at(j);
//         if(k>='a' && k<='z'){

//             lowercase++;
//         }
//         else if(k>='A' && k<='Z'){

//             uppercase++;
//         }
//         else if(k==' '){


//             spaces++;
//         }

        
//     }
//     cout<<"total number of uppercases are: "<<uppercase<<"\n";
//     cout<<"total number of lowercases are: "<<lowercase<<"\n";
//     cout<<"total number of spaces are: "<<spaces;


//     return 0;
// }




//  Input two strings and check whether they are equal and whether they have the same length.


// #include<iostream>

// using namespace std;

// int main(){
//     string x;
//     string y;
//     int a;
//     int b;

//     cout<<"enter a string: (x) ";
//     getline(cin,x);
//     cout<<"enter a string: (y) ";
//     getline(cin,y);

//     a = x.length();
//     b = y.length();
//     if(a==b){

//         cout<<"the input strings x and y have same length.\n";
//     }
//     else{
//         cout<<"the input strings x and y dont have same length.\n";

//     }

    
//     if(x==y){

//         cout<<"both strings x and y are same. \n";
//     }
//     else{

//         cout<<"both strings x and y are different.\n ";
//     }

//     return 0;

// }



// 23. Check whether a number is an Armstrong number.


// #include<iostream>
// #include<cmath>

// using namespace std;

// int main(){
//     string x;
//     int y;
//     int i;
//     string z;
//     int p;
    
//     int sum=0;
//     cout<<"enter a number: ";
//     cin>>x;
    

//     y = x.length();
//     for(i=0;i<=y-1;i++){
//         z = x.at(i);
//         p = stoi(z);
//         p = pow(p,y);
//         sum+=p;

//     }
//     if(sum==stoi(x)){

//         cout<<"its an armstrong number";
//     }
//     else{


//         cout<<"its not an armstrong number";
//     }
//     return 0;
// }




// 24. Input marks of 5 subjects and print the average and final grade.


// #include<iostream>
// using namespace std;

// int main() {
//     int m1, m2, m3, m4, m5;
//     int total;
//     float average;

//     cout << "Enter marks of 5 subjects: ";
//     cin >> m1 >> m2 >> m3 >> m4 >> m5;

//     total = m1 + m2 + m3 + m4 + m5;
//     average = total / 5.0;

//     cout << "Total = " << total << endl;
//     cout << "Average = " << average << endl;

//     if (average >= 90) {
//         cout << "Grade: A";
//     }
//     else if (average >= 80) {
//         cout << "Grade: B";
//     }
//     else if (average >= 70) {
//         cout << "Grade: C";
//     }
//     else if (average >= 60) {
//         cout << "Grade: D";
//     }
//     else {
//         cout << "Grade: F (Fail)";
//     }

//     return 0;
// }



// 25. Take a number n and print a continuous number triangle pattern.


#include<iostream>

using namespace std;

int main(){



    int rows;
    int k=1;
    cout<<"enter the number of rows you want to print: ";
    cin>>rows;


    for(int i=1;i<=rows;i++){
        for(int j=1;j<=i;j++){

            cout<<k<<" ";
            k+=1;
        }
        cout<<"\n";


    }



    return 0;
}
