
 #include <iostream>
 using namespace std;

 void swap_digits(string &x,string &y);

 int main(){

    string x,y;

    cout<<"enter digit 1: ";
    cin>>x;

    cout<<"enter digit 1: ";
    cin>>y;

    swap_digits(x,y);

    cout<<x<<endl;
    cout<<y<<endl;


    return 0;
 }

void swap_digits(string &x,string &y){

    string temp = x;
    x = y;
    y = temp;


    
}