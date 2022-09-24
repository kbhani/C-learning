// Example program
#include <iostream> // essential libraries
#include <string> // essential libraries
using namespace std;

int main(){
 bool is_prime( long long int );
 long long int n;
 long long int x = 0;
 cin >>n;
 long long int k = n;
 if ( is_prime(n) == true ) {
     cout<<"The biggest prime factor of "<<n<<" is "<<n<<endl;
 }
 else {
    for ( x = 2; x < k; x++ ){ 
        if ( is_prime(x) == true ){ //check if divisor is prime
            while ( k % x == 0 ){   //check if divisor is a factor
            k = k/x;
            }
        } 
    }
    cout<<"The biggest prime factor of given number is "<<x<<endl;
 }
}

bool is_prime( long long int n ){
    if ( n % 2 == 0 && n > 2){
        return false;
    }
    for( long long int i = 2; i*i < n; i++) {
        if( n % i == 0 ){
            return false;
        }
    }
    return true;
}