// lets create an array of grades


#include <iostream>
using namespace std;

int main(){

// format : new data_type[] --> for array declartion.
//within the brackets we will mention the size.
// if we already know the size of array before we even run the program.
// there is no point of allocating memory dynamically (no point of using dynamic memory), that can be done normally.
//we would like to allocate dynamic memory, when we dont know what the size is gonna be.

char *pGrades = nullptr;
int size;
cout<<"input the number of grades you want to enter: "<<endl;
cin>>size;

pGrades = new char[size];    // allocates memory in heap instead of stack.

for(int i=0;i<size;i++){


    cout<<"enter the grade no: "<<i+1<<": "<<endl;
    cin>>pGrades[i];
}

for(int i=0;i<size;i++){

    cout<<pGrades[i]<<" ";
}

delete[] pGrades;


return 0;
}