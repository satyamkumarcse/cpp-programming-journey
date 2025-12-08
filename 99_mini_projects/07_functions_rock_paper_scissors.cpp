#include <iostream>
#include <ctime>
using namespace std;

// void displaychoice();


char yourchoice();

char computerchoice();

// void displaywinner();

int main(){
      char your_choice;
      char computer_choice;
      int x;
      srand(time(0));

      your_choice = yourchoice();

      cout<<your_choice<<"\n";

      computer_choice = computerchoice();

      cout<<computer_choice;

    
        
    return 0;
}

char yourchoice(){
    char your_choice;
    cout<<"enter a choice r/p/s : ";
    cin>>your_choice;

    if(your_choice!='r' && your_choice!='p' & your_choice !='s'){

        cout<<"invalid choice\n";
        return yourchoice();
    }
    else{
        return your_choice;

    }


}

char computerchoice(){
    char computer_choice;
    int x;


    
            x = rand() %3 + 1;
            switch(x){

                case 1: computer_choice = 'r';
                break;
                case 2: computer_choice = 'p';
                break;
                case 3: computer_choice = 's';
                break;
            

            }
    return computer_choice;

}



