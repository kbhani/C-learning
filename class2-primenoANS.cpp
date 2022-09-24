// Example program
#include <iostream> // essential libraries
#include <string> // essential libraries
using namespace std;

int main(){
    bool flag = true;
// Prime numbers cannot be divided by any number other than 1 and the number itself without leaving a remainder.
    int array[100];
    for ( int i = 0; i < 100; i++ ){
        array[i] = i + 1;
        for ( int k = 2; k < array[i]; k++){
            if (array[i] % k == 0){
                flag = false;    
            } 
            
        }
        if (flag == true) {
            cout <<array[i]<<" is prime"<<endl;
        }
        else flag = true;
    }
    
}
