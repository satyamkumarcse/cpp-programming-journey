// x.length() gives lenght of the string.

//x.empty() tell if the input string is empty or not

//x.clear() will clear out any thing that is stored in string(x)

//x.append() we can append a string to another string

//x.at()  we can write an index and get the character present at that particular index.

//x.insert(index,"y")   we can insert a character at a given position in the string. "y" here is letter of anytype

//name.find() index of first white space or any letter in general

// name.erase(begenning index,ending index) = erases a portion of the string. the ending index is excluded similar to pyton.



#include <iostream>
using namespace std;
int main()


{
    string name;
    cout<<"type your full name: ";
    getline(cin,name);

    // std::getline(std::cin,name); 

    // if(name.length()>12){

    //     cout<<"maximum input character is 12 only.";
    // }
    // else{









    //     cout<<"welcome to the game";
    // }

    // if(name.empty()){

    //     cout<<"you didnt entered your name";

    // }
    // else{


    //     cout<<"hello "<<name;
    // }



    // name.clear();  
    // cout<<"hello "<<name;
    


    // name.append("@gmail.com");

    // cout<<"your gmail address is: "<<name;



    // cout<<name.at(0)<<"\n";
    // cout<<name.at(1);




    // name.insert(1,"@");
    // name.insert(0,"@");
    // cout<<name;

    // cout<<name.find(" ");
    // cout<<name.find("t");

    name.erase(0,3); // 
    cout<<name;



    return 0;
}

