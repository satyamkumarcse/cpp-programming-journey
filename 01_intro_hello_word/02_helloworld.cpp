/* whenever we write a code : header --> main block of code ---> footer

 iostream is a header file (library) that contains functions for basic input, output & endl operations 

include iostream means we are including that header files, which gives us access to bunch of input ,outout & endline operations.

main()
Every C++ program must have a main() function because this is the entry point.
The compiler starts executing code from here.

int → return type of the function (it returns an integer value to the operating system)

{ } → body of the function (code runs inside these braces)

() → parameters (usually empty in basic programs)



std::cout = standard character output

"<<" sends data into the output stream (towards the screen).
cout << "hi";
Send the text "hi" to the screen.


eg-
std::cout << "hi" << std::endl;
meaning - Print hi on the screen as output and then go to the next line.



semi colon ; 

 at the end of a statement we add a semicolon ; that tells the compiler that this statement is done. basically like a period at the end of a sentence (fullstop) 

return 0; 
return 0 means the program ended successfully without any error.
What it tells the operating system?
Everything is OK, no errors occurred.

return 1;
Meaning
return 1 means the program ended with an error or something went wrong.
When to use
You use it when you want to indicatestd::endl a problem or failure

return 0; → Program successful
return 1; → Program failed (some error happened)




 
 */

// #include <iostream>
// int main(){

//     std::cout << "i love pizza" << ;
//     std::cout << "its really good" << std::endl;
//     return 0;
// }

// there is a problem, we have these 2 sentences on same line so for that use 
// std::endl (that means end line)



// another alternative is also there performance wise 
// #include <iostream>
// int main(){
//     //this is a comment 

//     std::cout << "i love pizza" << '\n';
//     std::cout << "its really good" << '\n';
//     return 0;
// } 


/*benefit of using endl 
it will flush the output buffer
we can use either of them 
*/


//  = for single line comment

/*for 
a 
multi line 
comment */



// implementation of what i have learnt 


#include <iostream>
int main(){

    std::cout <<"hi" <<std::endl;
    std::cout <<"my name is satyam"<<std::endl;

    
    /*
    multiline 
    comment*/
    // single line

    return 0;
}

// You cannot run both "programs" named main() simultaneously by keeping them in the same file because a C++ program can only have one function named int main().


