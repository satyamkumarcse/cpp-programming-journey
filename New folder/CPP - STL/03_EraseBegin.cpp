
//************************************* */

// let us talk about some other vector functions
// erase,insert,clear,empty. 

//  the function erase and insert are kind of costly functions.
// push_back,pop_back,emplace_back,front & back all thease at O(1) runtime complexity ie- const time complexity
// erase and insert work in O(n) time complexity in worst case.


// erase - use to erase an element 
// if i want to erase an element from last, we can simply use pop back.
// but if i want to erase an element not present at the end. i have to use iterators.
// before learning iterators lets see



// vec.begin() = gives position of the begineing of a vector. ie- index 0. sort of a pointer (not actually) pointing at index 0.

// vec.erase(vec.begin())   --> erases the element present at index 0.



 int main(){

    vector <int> vec1 = {12,34,42,42,12,34,56,32};

    //by using vec.erase() if we want we can erase a range of numbers.
    // vec1.erase(vec1.begin());         // erases the element present at index = 0.
    // vec1.erase(vec1.begin()+2);         // erases the element present at index = 2.

    // vec.erase(start,end)   -- end is not inclusive (same as python)


    vec1.erase(vec1.begin()+1,vec1.begin()+3);
    vector <int> vec2(vec1);
    for(int ele : vec2){

        cout<<ele<<" ";
    }
    cout<<endl;


    return 0;
 }

//  when we use vec.erase() the size of the vector changes, but the capacity remains same.






