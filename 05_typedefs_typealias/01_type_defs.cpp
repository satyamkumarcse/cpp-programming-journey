/*
typedef = reserved keyword used to create an additional name (alias) for another data type. 
new identifier for an existing type
helps with readability and reduces typos.
*/



//In C++, <vector> is a standard library header that provides the std::vector container—one of the most widely used dynamic arrays.

// we have studied many data types, bool,int,double,string.some datatypes are very long in names, we wont feel comfortable writing them again and again, so we can use typedef which helps with readability and reduces typos.

#include <iostream>
#include <vector>

typedef std::vector<std::pair<std::string,int>> pairlist_t;

int main(){

    pairlist_t pairlist;
    return 0;
}



/*datatype:  std::vector<std::pair<std::string,int>> 

alias : pairlist_t

this datatype could be for used for a pair list.
a common convention is use_t at end of the new alias/identifier  
*/