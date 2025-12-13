
// x = toupper(x),   tolower - for changing case of a string written text 

#include <iostream>
using namespace std;

int main(){

    string questions[]={"1. when was c++ created.?",
                        "2. who invented c++?",
                        "3. what is predecessor of c++?",
                        "4. is the earth flat?"};

    
    string options[][4] = {{"a. 1985","b. 1983","c. 1979","d. 1998"},
                           {"a. guido van rossum","b. bjarne stroustrup","c. sometimes","what's earth?"},
                           {"a. c","b. c#","c. java","d. assembly"},
                           {"a. yes","b. no","c. sometimes","d. what's earth?"}};

    char answerkey[] = {'A','B','A','B'};

    int size = sizeof(questions)/sizeof(questions[0]);
    char guess;
    int score=0;

    for(int i=0;i<size;i++){
        cout<<"***************"<<endl;
        cout<<questions[i]<<"\n";
        cout<<"***************"<<endl;
        
        for(int j=0;j<sizeof(options[i])/sizeof(options[i][0]);j++){
            cout<<options[i][j]<<"\n";

            

        }

        cout<<"enter your guess : ";
        cin>>guess;
        guess = toupper(guess);

        if(guess==answerkey[i]){

            // cout<<"answer is correct"<<"\n";
            score++;

        }
        else{

            // cout<<"wrong answer!!!"<<"\n"<<"correct answer is "<<answerkey[i];
            continue;

        }
        
        
    }


cout << endl;
cout << endl;
cout << "Total score: " << score*25 <<"%" << endl;
cout << endl;






    return 0;
} 



    // cout<<questions[0]<<"\n"<<options[0][0];
    // cout<<"\n"<<options[0][1];
    // cout<<"\n"<<options[0][2];
    // cout<<"\n"<<options[0][3]<<"\n";
    // cout<<"\n"<<questions[1]<<"\n"<<options[1][0];
    // cout<<"\n"<<options[1][1];
    // cout<<"\n"<<options[1][2];
    // cout<<"\n"<<options[1][3]<<"\n";
    // cout<<"\n"<<questions[2]<<"\n"<<options[2][0];
    // cout<<"\n"<<options[2][1];
    // cout<<"\n"<<options[2][2];
    // cout<<"\n"<<options[2][3]<<"\n";
    // cout<<"\n"<<questions[3]<<"\n"<<options[3][0];
    // cout<<"\n"<<options[3][1];
    // cout<<"\n"<<options[3][2];
    // cout<<"\n"<<options[3][3];
