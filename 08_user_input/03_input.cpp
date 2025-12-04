#include <iostream>

int main(){
    std::string name;
    int age;

    std::cout<<"write your age: "<<std::endl;
    std::cin>>age;




    std::cout<<"wrtie your full name"<<std::endl;
    std::getline(std::cin >> std::ws,name);
    

    std::cout<<"your full name is "<<name;



    return 0;
}


/*
wrong output:

write your age: 
18
wrtie your full name
your full name is


*/

/*
why this happens:


first, let us know what is input buffer:

when we type: 18
The input buffer contains:
'1' '8' '\n'
This is sitting in the buffer before your program reads it.


also note that:
getline() always reads from whatever is already in the input buffer first
getline() does not wait for fresh keyboard input if something is already in the input buffer.
eg- here, when i am writing my full name (satyam kumar singh), before that buffer input will be read.





The \n always comes from pressing the Enter key.
Even if you type exactly:
18
There is still an invisible newline at the end.
Pressing Enter automatically produces \n and sends it to the input buffer.

When you type: 18
The input buffer becomes:
'1' '8' '\n'
The newline is not shown on screen, but it is always there.

When you run:
std::cin >> age;

It consumes only what it needs:

Reads '1'

Reads '8'

Stops reading when it encounters something that is not part of the integer.

>> does not consume this newline.
So the buffer now contains:
'\n'

finally write
"std::getline(std::cin >> std::ws,name);" to get the normal output.

>> std::ws --> Skip and discard all leading whitespace characters before any user input.


*/

