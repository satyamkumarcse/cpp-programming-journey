/*
break - break out of a loop
continue - skin current iteration




*/



#include <iostream>
using namespace std;

int main(){

    for(int i=0;i<=20;i++){
        if(i==13){
            // break;
            continue;
        }

        cout<<i<<"\n";

    }

return 0;

}