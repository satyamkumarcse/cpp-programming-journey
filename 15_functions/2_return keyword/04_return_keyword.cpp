// create a function that will add user's first name and last name & create a new string called full name

#include  <iostream>
using namespace std;

string full_name(string first_name,string last_name){ 

    // return first_name.append(last_name);            //(more good approach)
    return first_name + " " + last_name;              // (similar to python)
    
    
    
    // return first_name + " " + last_name; works because in C++ the + operator is overloaded for std::string to mean concatenation
    //std::string defines operator+ so that when you write a + b, it returns a new string whose contents are a followed by b


}

int main(){
    string first_name = "satyam";
    string last_name = "kumar singh";
    string entire_name = full_name(first_name,last_name); // (function is invoked here)

    cout<<"your full name is: "<<entire_name;


    return 0;
}
