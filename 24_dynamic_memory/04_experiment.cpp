// such type of code do same, but may dont compile on other compilers. its compiling of vscode and mingw. its not portable.
// thus dynamic memory is used its universal
 #include <iostream>
 using namespace std;

 int main(){
    int size;
    cout<<"enter the size you want for the array : ";
    cin>>size;

    int array1[size]={};

    for(int i=0;i<size;i++){
        cout<<"enter array elements: ";

        cin>>array1[i];
    }
     cout<<"[ ";
    for(int j=0;j<size;j++){

        cout<<array1[j]<<" ";
        
    }
    cout<<" ]";


    return 0;
 }

//  int size;
// cin >> size;
// int arr[size];   // NOT standard C++
