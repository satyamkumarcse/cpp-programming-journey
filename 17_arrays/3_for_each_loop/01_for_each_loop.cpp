//    foreach loop = loop that eases traversal (iteration process) over an iterable data set
// array is an example of iterable data set




// datatype = datatype of the entity which we are iterating over.

// name = name of current element that we are on. do a naming by ourself.

// for each loop = for(datatype name array_name){}



#include <iostream>
using namespace std;

int main(){
    string students[]={"satyam","ramesh","suresh"};
    char grades[]={'A','B','C','D','F'};
    int marks[]={34,67,89,90,66,55};

    for(std::string student_names : students){

        cout<<student_names<<"\n";
    }

    for(char grade : grades){

        cout<<grade<<"\n";
    }
    for(int mark : marks){
        
        cout<<mark<<"\n";
    }

    // for(int i=0;i<sizeof(students)/sizeof(students[0]);i++){

    //     cout<<students[i]<<"\n";

    // }



return 0;
}

// a standard for leep needs 3 statements, there is a more shorter way to write this using for each loop.

    // for each loop has less syntax so its easy to write, but its also less flexible. in case of a traditional for loop, we can iterate backward,forward,over even skip iterations.

    // for each loop = start from beginenning and go till end.


