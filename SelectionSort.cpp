//The selection sort algorithm sorts an array by repeatedly finding the minimum element 
//(considering ascending order) from the unsorted part and putting it at the beginning of the unsorted array

#include <iostream> 
#include <string>   
using namespace std;

int main(){
   
    int k;
    int temp;
    int arr[] = {3,4,1,2,0};
    
    for ( int j = 0; j < 5 ; j++){
        temp = arr[j];
        k=j;
        for( int i = j; i < 5; i++ ){
            if (arr[i] < temp){
                k = i;
                temp = arr[i];
            }
        }
        
        temp = arr[j];
        arr[j] = arr[k];
        arr[k] = temp;
        
        for (int i = 0; i < 5; i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }

}    




        