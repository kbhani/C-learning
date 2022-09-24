// Example program
#include <iostream> // essential libraries
#include <string> // essential libraries
using namespace std;

int main(){
    int n;
    cin >>n;
    int num_digits(int);                            //declaration 
    bool is_palindrome (int); 
    if ( is_palindrome(n) == true ){
        cout<<"No. is Palindrome";
    } 
    else cout<<"No. is not a Palindrome";
}
    

bool is_palindrome ( int n ) {
    if (n > 0) {
        int num_digits ( int );
        int d = num_digits(n);                          //d is the number of digits
        int arrayOne[d];                                //defining an array with array length "d"
        int arrayTwo[d];                                //defining an array with the same array length as previous array "d"
        for ( int i = 0; i < d; i++ ){                  //converting given number "n" and storing it as an array [ arrayOne to be precise ] 
            arrayOne[i] = (n % 10);
            arrayTwo[d-i-1] = (n % 10);
            n = n/10;                                   //
        }
        for ( int i = 0; i < d; i++ ){                  //reversing the first array and storing it as a second array [ arrayTwo to be precise ]  
            if ( arrayOne[i] != arrayTwo[i] ) {         //check if every element of both arrays are equal in same 
            return false;   
            }
        }
    return true;
    }
    else return false;
}

int num_digits ( int n ) {
    int d = 1;
    int tenP = 10;
    while ( n % tenP != n ) {
        tenP = tenP*10;
        d++;
    }    
    return d;
} 
