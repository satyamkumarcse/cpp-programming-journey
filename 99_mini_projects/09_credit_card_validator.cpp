#include <iostream>
using namespace std;

int getnumber(int number);
int sumeven(string cardnumber);
int sumodd(string cardnumber);

int main(){
    string cardnumber;
    int number;
    int result;

    cout<<"enter your 16 digit card number for verification: ";
    cin>>cardnumber;

    result = sumeven(cardnumber) + sumodd(cardnumber);
    if(result%10==0){

        cout<<"the card number "<<cardnumber<< " is valid";

    }
    else{

        cout<<"the card number "<<cardnumber<< "is not valid";

    }



    return 0;
}




int getnumber(const int number){            // helper function


    return number%10 + (number/10)%10;

}

int sumeven(string cardnumber){


    int sum=0;

    for(int i=cardnumber.size()-1;i>=0;i-=2){

        sum += (cardnumber[i]-'0');

    


    }
        return sum;





}

int sumodd(string cardnumber){                 // main function of helper function

    int sum=0;

    for(int i=cardnumber.size()-2;i>=0;i-=2){

        sum += getnumber((cardnumber[i]-'0')*2);     //ASCII 

      


    }

      return sum;
}


