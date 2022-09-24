//sum of primes below 2Million
#include <iostream>

using namespace std;

int main(){ 
    long long sum = 0;
    bool is_prime(long long int );
    for (long long int i = 1; i < 2000000; i++){
        if( is_prime(i) == true ){
            sum = sum + i;
            
        }
    }    
    cout<<sum;
    
}




bool is_prime(long long int n ){
    if (n < 2){
        return false;
    }
    if ( n % 2 == 0 && n > 2){
        return false;
    }
    for(long long int i = 2; i*i <= n; i++) {
        if( n % i == 0 ){
            return false;
        }
    }
    return true;
}