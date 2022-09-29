#include <iostream>
using namespace std;

int main(){
    
    int fact (int );
    cout<<fact(5);
    
}




int fact(int n){
    if(n == 0){
        return 1;
    }
    else{
        return n*fact(n-1);              
        
    }
}