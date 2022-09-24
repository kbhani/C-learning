// Example program
#include <iostream> // essential libraries
#include <string> // essential libraries
using namespace std;

int main(){
   
    int n; //last number in the range, from 1 till n
    cin>>n;
    bool flag = true;
    int array[n];
    for ( int i = 0; i < n; i++ ){
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