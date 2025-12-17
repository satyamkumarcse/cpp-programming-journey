// in order to insert element at any chosen index, we use
//  vec.insert(position of insertion , value to be inserted)

// inserting 99 at pos 2.




//  #include <iostream>
//  #include <vector>
//  using namespace std;

//  int main(){

//     vector <int> vec1 = {12,34,56,78,89};
//     vec1.clear();   // notice that all the elements are deleted, but blank spaces is printed as the vector's internal capacity remains same.
//     vec1.insert(vec1.begin()+2,99);
//     for(int ele : vec1){

//         cout<<ele<<" ";
//     }
//     cout<<endl;
    

//     return 0;
//  }

// // vec1.clear()  --> clears the entire vector.



/********************** */


 #include <iostream>
 #include <vector>
 using namespace std;

 int main(){

    vector <int> vec1 = {12,34,56,789,9,7,6,44};
    // vec1.clear();         // vec1.empty()  if yes then true(1) else false(0).


      for(int ele : vec1){

        cout<<ele<<" ";
    }
    cout<<endl;
    

    cout<<"the size after clearing is: "<<vec1.size()<<endl;

    cout<<"the capacity after clearing is: "<<vec1.capacity()<<endl;

    cout<<"is the vector empty after clearing?:  "<<vec1.empty()<<endl;
      
    return 0;
 }

// erase,insert do operation by in the middle instead of front,back. thus these are generally very costly due to time complexity.

// clear,empty is altho used majorly.



