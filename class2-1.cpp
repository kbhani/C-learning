// Example program
#include <iostream> // essential libraries
#include <string> // essential libraries
using namespace std; // std 

int main() {  
    float saitama( float j ); // function declaration
    float jojo[10];
    int i = 0; // array declaration , type int, length = 10
    while ( i < 10 ){ // loop to assign elements of jojo array incremently
      
      jojo[i] = saitama(i); // The i-th element of array jojo is being assigned the value returned by the function saitama with the input parameter as "i"
      i++;
    }
    i = 0; 
    while ( i < 10 ){
        cout << "The element number "<<i + 1<<" of the array jojo is " << jojo[i] <<endl;
        i++;
    } 
}    
float saitama(float j){ // function definition
    if ( j < 1 ) {
        cout << "The answer is less than 1, therefore not allowed" << endl << endl;
        return 0; // float saitama(float j) - expect a result of float type, but if j = 0 then nothing is returned, which results in an error. "return 0" helps to remove that error 
    }
    else return ((j*j*j + 1)/(j*j));
}
