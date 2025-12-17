// Array → use index arr[i]

// Linked list → use pointers

// Tree → complex traversal logic

// This leads to non-reusable, all container have thier own specific code to iterate elements.

// 2. What Is an Iterator?
// Definition

// An iterator is an object that acts like a generalized pointer to traverse elements of any container.





// vec.begin()
// vec.end()
// rbegin
// rend


// vec.begin and vec.end returns beggining and end iterator.
// we can imagine it like a pointer.

// a = {1,2,3,4,5,6}
//  if i do vec.begin --> the iterator will point at index (0).
// we will get the location in the memory, where 1 is stored.
// derefrencing it will give the value stored in it, that is 1.

// *(vec.begin()) -> 1


//  #note - misconception
// vec.end() -> returns the last element address. (point to index n-1) (misconception)

//  it points to index n , which can have garbage value.
// derefrencing it will give a random value or 0.


//  #include <iostream>
//  #include <vector>
//  using namespace std;

//  int main(){

//     vector <int> vec = {1,2,3,4,5};
//     cout<<" *vec.begin() : "<<*(vec.begin())<<endl;


//     cout<<" *vec.end() : "<<*(vec.end())<<endl;     // gives a random value



//     return 0;
//  }


// vector loops and interators 




// vector<int>::iterator it;

//:: --> scope resolution operator --> tells the scope ie- were are pointing to vector int.


//for forward loop

// #include <iostream>
// #include <vector>
//  using namespace std;

//  int main(){

//     vector<int> vec={1,2,3,4,5,6,7};
//     vector<int> ::iterator itr;

//     for(itr=vec.begin();itr!=vec.end();itr++){
//     // for(itr=vec.begin();itr<vec.end();itr++){

//         cout<<*itr<<" ";
//     }
//     cout<<endl;


//     return 0;
//  }

 //here the loop is doing the same work, which is done by "for each" loop. but with help of iterators we are able to access the direct memory location where they are stored.


// for backward loop, we use reverse iterator.

// we can get the last element by vec.rbegin()      r - reverse
// vec.rend()  --> does not come on 0th index, it points to just before that.



// #include <iostream>
// #include <vector>
//  using namespace std;

//  int main(){

//     vector<int> vec={1,2,3,4,5,6,7};
//     vector<int> ::iterator itr;

//     for(itr=vec.rbegin();itr!=vec.rend();itr++){
    
//         cout<<*itr<<" ";
//     }
//     cout<<endl;

//     return 0;
//  }


//  instead of  vector<int> ::iterator itr we can also write auto.

 /*
 
 


    for( vector<int> ::iterator itr =vec.rbegin();itr!=vec.rend();itr++){
    
        cout<<*itr<<" ";
    }
    cout<<endl;
 
 
 
 
 */


//  #include <iostream>
// #include <vector>
//  using namespace std;

//  int main(){

//     vector<int> vec={1,2,3,4,5,6,7};


//     for(auto itr =vec.rbegin();itr!=vec.rend();itr++){
    
//         cout<<*itr<<" ";
//     }
//     cout<<endl;

//     return 0;
//  }


 #include <iostream>
 #include <string>
 using namespace std;

 int main(){
    string num;
    // num = (string)num;


    cout<<"enter the number: ";
    cin>>num;


    for(int i=num.length()-1;i>=0;i--){

        cout<<num[i];

    }



    return 0;
 }
