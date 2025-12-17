// arr[3] = {1,2,3};

// way to create an array in cpp, without using stl.
// in a memory space array is created.

// vector is very similar to a C++ array. its a container which can act like array and can dynamically store values.

// why need of vector? when array is there...

// in cpp, the size of array is constant.
// if we declare an array of size = 3. (--1) . we cant modify the size during the runtime.
// array has a kind of const nature


// so if we want a container, where we want to store data like array & use it also like an array, but we want it also to be dynamic so that it can be resized during runtime. we use vector. 



// now let us see how vectors grow in size inside the memory.

// vector <int> vec;      = creates a vector whose size is 0.

// there are multiple functions which we can use to insert data.
// vector is the first container that we will study in detail
// bacause generally in cpp STL, majority containers use the same functions.


//  format : vector <datatype> vec_name;



 #include <iostream>
 #include <vector>
 using namespace std;
 
 int main(){

    // vector <int> vec;     // initially no data stored in vector. size is 0.
    // cout<<vec.size()<<endl;     // verified that size is 0.

    // vector <int> vec;
    // vec.push_back(1);               // a new data was inserted
    // cout<<vec.size()<<endl;          // size thus increased


//****************************** */

    // vector <int> vec;
    // vec.push_back(10);               
    // vec.push_back(20);
    // cout<<vec.size()<<endl;          // size thus increased
/*
When push_back() is called and the vector’s capacity is insufficient, the vector allocates a larger block of memory (often growing geometrically), copies or moves existing elements to the new memory, frees the old memory, and then inserts the new element. The size() always increases by exactly 1 for each successful insertion.
capacity may become 1->2 or 1->4. generally it doubles.
size & capacity are two different components in a vector.
capacity - number of elements it can hold.
size - it is currently holding.
*/



//*********************************************** */



// if we try to insert a 3rd element.

//  vector <int> vec;
//     vec.push_back(10);               
//     vec.push_back(20);
//     vec.push_back(30);
//     cout<<vec.size()<<endl;         // size is 3
//     cout<<vec.capacity()<<endl;     // capacity is 4


//********************************************* */


//if we want we can also print all the elements of a vector

// vector <int> vec;
//     vec.push_back(10);               
//     vec.push_back(20);
//     vec.push_back(90);
//     vec.push_back(80);
//     vec.push_back(70);

//     // use for each loop to print the values present in the vector
//     for(int val:vec ){
//         cout<<val<<" ";

//     }


//*********************************************** */


// push_back has an alternate known as emplace_back 


vector <int> vec;
    vec.push_back(10);               
    vec.push_back(20);
    vec.push_back(90);
    vec.push_back(80);
    vec.push_back(70);
    vec.emplace_back(45);
    // vec.pop_back();
    // vec.pop_back();          //pop_back --> if we want to delete the data present at the last index in the vector.
    // vec.pop_back();      
    // vec.pop_back();              // output : 10 20

    for(int val:vec ){
        cout<<val<<" ";

    }
    cout<<endl;


    // difference between the functionality of push back and emplace back

    /*
    push back assumes that, the data which we want to store in the vector is of the same type as vector.

    emplace_back creates inplace objects (will be studied later)
    
    */



    //************************************************ */

    /*if we want to access a element in the vector present at a particular index, as vector work like arrays only.
    so each value stored in the vector is associated with a particular index. (0 based indexing same as python/cpp)
    
    vec[index]   or  vec.at(index)      */


    cout<<"the value at idx 2 is: "<<vec[2]<<endl;
    cout<<"the value at idx 3 is: "<<vec.at(3)<<endl; 

    // .at() usaually not preferred. vec[] is used frequently.

    //for getting first or last element of a vector, we use front and back.

    cout<<"the element at front: "<<vec.front()<<endl;
    cout<<"the element at back: "<<vec.back()<<endl;


    //normally creating a vector : vector <int> vec; 
    //and pushing elements
    //we have other ways too, to initialse a vector.

    


    return 0;
 }


