// Example program
#include <iostream> // essential libraries
#include <string> // essential libraries
using namespace std;

int main(){
    for ( int i = 4; i >= 0; i--){
        
        for ( int k = 0; k <= i; k++){
            cout<<"*";
        }
        cout<<endl;
    }
}