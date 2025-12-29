
// if we are working with refrence data types, then const keyword is more benifical, because we dont want others to make changes in the original addresses of our code either.


 #include <iostream>
 using namespace std;

 
void printinfo(const string &name,const int &age);

 int main(){
    string name="satyam";
    int age=18;

    printinfo(name,age);


    return 0;
 }

void printinfo(const string &name,const int &age){

    name = " ";      // shows error
    age = 0;

      cout<<name<<"\n"<<age;

}
