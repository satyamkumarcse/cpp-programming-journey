
#include <iostream>
#include <ctime>
using namespace std;

char yourchoice();
char computerchoice();
void displayWinner(char user, char comp);

int main(){
    srand(time(0));

    char your_choice;
    char computer_choice;
    char play = 'y';

    while(play=='y' || play=='Y'){

        your_choice = yourchoice();
        cout<<"You chose: "<<your_choice<<"\n";

        computer_choice = computerchoice();
        cout<<"Computer chose: "<<computer_choice<<"\n";

        displayWinner(your_choice, computer_choice);

        cout<<"\nPlay again? (y/n): ";
        cin>>play;
    }

    cout<<"Thanks for playing.\n";
    return 0;
}

char yourchoice(){
    char your_choice;

    cout<<"Enter a choice r/p/s : ";
    cin>>your_choice;

    if(your_choice!='r' && your_choice!='p' && your_choice!='s'){
        cout<<"Invalid choice. Try again.\n";
        return yourchoice();     
    }
    return your_choice;
}

char computerchoice(){
    int x = rand() % 3 + 1;

    switch(x){
        case 1: return 'r';
        case 2: return 'p';
        case 3: return 's';
    }
}

void displayWinner(char user, char comp){

    if(user == comp){
        cout<<"Draw game.\n";
        return;
    }
    if((user=='r' && comp=='s') ||
       (user=='p' && comp=='r') ||
       (user=='s' && comp=='p')){

        cout<<"You win.\n";
    } else {
        cout<<"Computer wins.\n";
    }
}
