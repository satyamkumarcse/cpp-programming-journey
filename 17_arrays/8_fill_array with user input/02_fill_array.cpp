
 #include <iostream>
 using namespace std;

 int main(){

    // int array1[5];
    string foods[5]={};   //initialisation of an array
    

    for(int i=0;i<5;i++){

        cout<<"enter the food items you want in the menu or 'q' to quit: "<< "# "<<i+1<<" ";
        // cin>>foods[i] ;
        getline(cin,foods[i]);
        if(foods[i]=="q"){

            break;
        }


    }
    

    cout<<"the final array after entering the elements is : \n";
    for(string food : foods){
        if(food!="q"){
            cout<< food << "\n";
            


        }
        else{

            break;
        }




        
    }
  


    return 0;
 }

//  if i want to make a program that just dont take q as input and also dont print it. lets see 03_fill_array.