/* 

const parameter is a parameter that is modified with a const keyword.
thus making it read only.
there are many reasons why we require const parameter :
code is more secure & conveys intent to other programmers.
 useful for refrences and pointer.


*/


 #include <iostream>
 using namespace std;

 
void printinfo(const string name,const int age);

 int main(){
    string name="satyam";
    int age=18;

    printinfo(name,age);


    return 0;
 }

void printinfo(const string name,const int age){

    // name = " ";
    // age = 0;

      cout<<name<<"\n"<<age;

}

// without const parameter, anyone can make changes in the code (--31,32) (decreases the security) 
// for eg- here , after injecting falsee info, age becomes 0, name becomes empty.
// add const keyword (--29,17) 
// now changes cant be made error is showing
// error :  assignment of read-only parameter 'age'

// when we are passing name and int as arguements,we are making a copy of values present in name and age, technically we are not modifying original values.(--20,21)

// if we are working with refrence data types, then const keyword is more benifical, because we dont want others to make changes in the original addresses of our code either.