#include <iostream> 
#include <string>   
using namespace std;

int main(){
    
    int temp;
    
    int arr[] = {3,7,1,4,6,5,9,2,10,8};
    
    for( int i = 0; i < 10; i++){
        
        for ( int j = 0; j < 10; j++){
            if ( arr[j] > arr[j + 1] ){
                temp = arr[j + 1]; 
                arr[j + 1] = arr[j];
                arr[j] = temp;
                
            }
        }    
    }
    for ( int i = 0; i < 10; i++ ){
        cout<<arr[i]<<", ";
    }    
}    
 