#include <iostream>                         
using namespace std;


int main(){
    int start = 0;
    int end = 8;
    int m = 0;
    int k = 57;
    
    int array[] = {3, 4, 7, 9, 15, 16, 19, 22, 27};
    if(k < array[start] || k > array[end]){
        cout<<-1;
        
    } else {
        do{
            m = (start + end)/2;
            if(array[m] == k){
                cout<<m;
                break;
            }
            if(start == end){
                cout<<-1;
                break;
            } else {
                
                 if(array[m] < k){
                    start = m + 1;
                } else {
                    end = m - 1;
                }
            }
        }while(array[m] != k);
    }
}