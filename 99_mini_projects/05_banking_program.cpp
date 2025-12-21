#include <iostream>
using namespace std;

void checkbalance(double &balance);
void withdrawmoney(double withdraw,double &balance);
void depositmoney(double deposit,double &balance);


int main(){

    int operation;
    double withdraw;
    double deposit;
    double balance = 10000;

    do
    {       
    cout<<"enter the operation you want to perform (1/2/3/4) for (check_balance/deposit/withdraw/stop) : ";

    cin>>operation;
    cin.clear(); 
    fflush(stdin);

        if(operation==1){
        checkbalance(balance);
    }
    else if(operation==3){

        withdrawmoney( withdraw,balance);
    }

    else if(operation==2){

        depositmoney( deposit, balance);

    }
    else{

        cout<<"invalid input!!!\n";
    }}while(operation!=4);

    return 0;
}

void checkbalance(double &balance){ 

    cout<<"current balance : "<<balance<<endl;

}

void withdrawmoney(double withdraw,double &balance){
    cout<<"enter the amount you want to withdraw: ";
    cin>>withdraw;

    if(balance<withdraw){

        cout<<"not enough balance\n";
    }
    else{

    balance -=withdraw;
    cout<<"the amount withdrawn is = "<<withdraw<<endl;
    cout<<"remaining balance is = "<<balance<<endl;

    }

}

void depositmoney(double deposit,double &balance){
    

    cout<<"enter the amount you want to deposit: ";
    cin>>deposit;
    balance +=deposit;
    cout<<"the amount deposited is = "<<deposit<<endl;
    cout<<"new balance is = "<<balance<<endl;

}

/*
Using double &balance makes the functions operate on the original balance variable from main, so deposits and withdrawals persist across operations

*/

/*

    /*


cin.clear()
if we enter anything except numbers, the program will break and compiler will output infinite times.
cin is an input stream object.

When you give wrong input (e.g., letters when an int is expected), cin goes into a fail state and stops working for further inputs.

cin.clear(); resets the error flags on cin, so it can accept input again.

they also clear the input buffer.


    */






