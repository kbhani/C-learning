#include <iostream>                         //BINARY SEARCH
using namespace std;

int main(){
    int search( int[] );
    int numSearch;
    const int n;
    cin>>n;
    int array[n];
    cout<<"Enter the elements of the array ";
    for(int i = 0; i < n; i++){
        cin>>array[i]>>" ";    
    }
    endl;
    
    cout<<"Enter the element you want to search "
    cin>>numSearch;
    search(array[n]);
}

int search( int searchArray[] ){
    if( n % 2 == 0 ){                           //array size is an even number
        int half = (n/2);
        if( numSearch < half ){
            for(int i = 0; i < (n/2); i++){
                if(array[i] == numSearch){
                    return array[i];
                }
            }    
        } else {
            for(int i = (n/2); i < n; i++){
                if(array[i] == numSearch){
                    return array[i];
                }    
        }
    } else {
        int half = (n/2) + 1;                   //array size is and odd number
        if( numSearch < half ){
            for(int i = 0; i < (n/2); i++){
                if(array[i] == numSearch){
                    return array[i];
                }
            }    
        } else {
            for(int i = (n/2); i < n; i++){
                if(array[i] == numSearch;
                return array[i];
            }
        }
}