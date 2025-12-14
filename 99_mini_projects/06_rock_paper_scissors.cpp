#include <iostream>
#include <ctime>

using namespace std;


int main(){
    int y;
    int x;
    srand(time(NULL));

    
    do{

        
    
        int computer_choice = rand() % 3 + 1 ;

        x = computer_choice;

        cout<<"enter your choice: (rock/paper/scissors/stop)-(1/2/3/4) : ";
        cin>>y;
        cin.clear();
        fflush(stdin);

    
        
        
        if(x==y && x==1){

        cout<<"its a tie "<<"your choice and computer's choice was "<<"rock\n";
    }
    else if(x==y && x==2){

        cout<<"its a tie "<<"your choice and computer's choice was "<<"paper\n";
    }
    else if(x==y &&   x==3){

        cout<<"its a tie "<<"your choice and computer's choice was "<<"scissors\n";
    }
    else if(x==1 && y==2){

        cout<<"you won!!"<<" your choice was paper"<<" computer's choice was rock\n";
    }
    else if(x==2 && y==1){

        cout<<"you lost!!"<<" your choice was rock"<<" computer's choice was paper\n";
    }
    else if(x==2 && y==3){

        cout<<"you won!!"<<" your choice was scissors"<<" computer's choice was paper\n";
    }
    else if(x==3 && y==2){

        cout<<"you lost!!"<<" your choice was paper"<<" computer's choice was scissors\n";
    }
    else if(x==1 && y==3){

        cout<<"you lost!!"<<" your choice was scissors"<<" computer's choice was rock\n";
    }
    else if(x==3 && y==1){

        cout<<"you won!!"<<" your choice was rock"<<" computer's choice was scissors\n";
    }
    else if(y==4){
        cout<<"end of program!! \nthank you ";
    }
    else{
        
        cout<<"invalid choice!!\n";
    }}while(y!=4);

   


    return 0;
}