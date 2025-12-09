
//  we will introduce a temporary variable
// instead to putting the user input in foods array, we will put it in temp vble.

// ##note:
/*
one disadvange of arrays is that they have a limited size. they are static.once you delare a size, you cant change it.

we set a limit of 5 in our program, but if during execution of program if the user wish to not use all the limits, the memory is wasted.

we will deal with this in dynamic memories and vectos. later.

*/


 #include <iostream>
 using namespace std;

 int main(){

    // int array1[5];
    string temp;
    string foods[5]={};   //initialisation of an array
    

    for(int i=0;i<5;i++){

        cout<<"enter the food items you want in the menu or 'q' to quit: "<< "# "<<i+1<<" ";
        // cin>>foods[i] ;
        getline(cin,temp);
        if(temp=="q"){

            break;
        }
        else{

            foods[i]=temp;
        }
    }
    
    cout<<"the final array after entering the elements is : \n";
    for(string food : foods){
        if(food!=""){

            cout<< food << "\n";
        }
        else{

            break;
        }


        }
    
    return 0;
 }

        // foods[i].empty() to check if during iteration i, input was empty or not
//  output:

/*



'pizza



"
i dont want 4 empty spaces, then make these changes.
*/

  
