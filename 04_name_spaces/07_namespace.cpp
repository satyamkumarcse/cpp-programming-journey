#include <iostream>

int main(){

    // std::string name= "bro";
    // std::cout<<"hello "<<name;

    // following can also we written as 

    using std::string;
    using std::cout;

    string name="bro"; //(no need to use prefix)

    cout<<"hello "<<name; //(no need to use prefix)



    
       return 0;
}


// usaually we will not use namespace std