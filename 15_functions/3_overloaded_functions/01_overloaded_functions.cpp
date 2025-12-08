/* overloaded functions in cpp and in many other languages */  
#include <iostream>
using namespace std;

void bakepizza(){

    cout<<"here is your pizza\n";
}

void bakepizza(string topping1){

    cout<<"here is your "<<topping1<<" pizza\n";

}

void bakepizza(string topping2,string topping1){

    cout<<"here is your "<<topping2 + " & " + topping1<<" pizza\n";

}



int main(){
    string topping1 = "mushrooms";
    string topping2 = "onion";

    bakepizza();
    bakepizza(topping1);
    bakepizza(topping2,topping1);

    return 0;
}

//currently i have a pizza with no toppings, just cheese.
// now let us add a pizza with toppings
// we will create an additional version of this bake pizza method but its going to have different parameter.
// its valid for functions to share same name, but they should have different set of parameters.
// a function's name + it's parameter = function signature
// each function signature needs to be unique

