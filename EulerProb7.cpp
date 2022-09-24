// Example program
#include <iostream> // essential libraries
#include <string> // essential libraries
using namespace std;

int main(){
    bool is_prime(long long int);
    
    int count = 0;
    int num = 0;
    
    while(count <= 10001){
        num++;
        if( is_prime(num) == true){
            count++;
        }
        
        
    }
    cout<<num;
    
}


bool is_prime( long long int n ){
    if ( n % 2 == 0 && n > 2){
        return false;
    }
    for( long long int i = 2; i*i <= n; i++) {
        if( n % i == 0 ){
            return false;
        }
    }
    return true;
}
   