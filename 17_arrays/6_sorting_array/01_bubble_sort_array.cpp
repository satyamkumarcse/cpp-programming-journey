
#include <iostream>
using namespace std;

void bubblesort(int array1[],int size);



int main(){
   int temp;
   int j;
   int size;
   int array1[] = {12,48,60,24,72,120,108,84};
   size = sizeof(array1)/sizeof(array1[0]);
   bubblesort(array1,size);

   for(int element : array1){


    cout<<element<<" ";
   }


   return 0;
}

void bubblesort(int array1[],int size){
    int temp;
    

   for(int i=0;i<size-1;i++){
    for(int j=0;j<size-i-1;j++){                            // after first iteration, as the last element is already sorted, we do j < size -i-1 = size -2,size-3 .....
                                                            // Then you repeat, but you don’t need to go till the end again, because last elements are already sorted.

        if(array1[j]>array1[j+1]){                      // ascending
        // if(array1[j]<array1[j+1]){                        // descending

            temp = array1[j];
            array1[j] = array1[j+1];
            array1[j+1]=temp;
        }
    
    }
      
   }


}