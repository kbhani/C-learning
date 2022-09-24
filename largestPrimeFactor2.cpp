// Example program
#include <iostream> // essential libraries
#include <string> // essential libraries
using namespace std;

int main(){
 bool is_prime( long long int ); // declaration
 long long int n;
 long long int x = 0;
 cin >>n;
 long long int k = n;
 if ( is_prime(n) == true ) {
     cout<<"case 1"<<endl;
     cout<<"The biggest prime factor of "<<n<<" is "<<n<<endl;
 }
 else {
    for ( x = 2; x < n; x++ ){ 
        if ( x >= k ){                          //check, divisor should not be equal to or greater than dividend
            break;
        } 
        if ( is_prime(x) == true ){             //check if divisor is prime
            while ( k % x == 0 &&  k != x ){    //check if divisor is a factor [ and division should not proceed beyond the last division which will result in printing 1 all the times ]
                k = k/x;
            }    
        }
    }
    cout<<"The biggest prime factor of given number is "<<k<<endl;
 }
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