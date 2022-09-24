// Example program
#include <iostream> // essential libraries
#include <string> // essential libraries
using namespace std;

int main(){
/*  int array[10];
    for ( int i = 0; i < 10; i++){
        array[i] = i + 1;
        }
    for ( int j = 9; j >= 0; j=j-2){
        cout << array[j]<<endl;
    }
*/
// Prime numbers cannot be divided by any number other than 1 and the number itself without leaving a remainder.
int i = 0;
    int array[100];
    for (  i = 0; i < 100; i++){
        array[i] = i + 1;
    for (int k = 1; k < 100; k++){
    while (array[i] <= k) {
        array[i] % k != 0;    
    }
    
    }
}
}