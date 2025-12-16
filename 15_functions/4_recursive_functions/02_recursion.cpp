// let us create a recursive function to walk. (iterative approach)

// #include <iostream>
// using namespace std;
// void walk(int steps);

// int main(){ 
//     int steps;

//     cout<<"enter the number of steps you want to walk: "<<endl;
//     cin>>steps;
//     walk(steps);




//     return 0;
//  }

// void walk(int steps){

//     for(int i=0;i<steps;i++){

//         cout<<"the step counter : "<<i+1<<endl;
//     }



//  }





// recursive approach 

// the for loop will be turned into if statememt, and a base case will be required which will tell us, when to stop.  


#include <iostream>
using namespace std;

int walk(int steps);

int main(){
  cout<<"enter the number of steps you want to walk: "<<endl;
   
    int steps;
     cin>>steps;
    walk(100);
    
return 0;
}


int walk(int steps){

    if(steps==0){

        return 0;

    }

    int j = walk(int (steps - 1));
    cout<<"the step counter : "<<steps<<endl;
    return j; 
   
}

// A recursive function does NOT continue to the next line until the recursive call finishes completely. 
// after all the recursion blocks are executed, LIFO principle is followed.

// in searching algorithm, or navigating a tree data structure, recursive approach is good.



// 