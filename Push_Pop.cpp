
#include <iostream> 
#include <string>   
using namespace std;
int main(){
    
    int push (int[], int, int, int);                                                                //declaration
    int top = -1;                                                                                   //this line will be never revisited, so top's value will never be -1 again.
    const int arr_length = 3;
    int array[arr_length];
    int input;
    int op;
    bool cont = true;
    cout<<"Enter 1 for push and 2 for pop"<<endl;
    cin>>op;
    while(cont == 1){
        if ( op == 1 ){
        cout<<"Enter input"<<endl;
        cin>>input;
        top = push (array, arr_length, top, input);                                               //call
        cout<<"Do you wish to continue? Press '0' for No and  '1' for Yes ";
        cin>>cont;
        }    
    }
    for ( int i = 0; i < (top + 1); i++){
        cout<<array[i]<<endl;
    }
}   

int push (int stack[], int size, int pot, int element) {                                      //definition
    if ( pot < (size - 1)){
        stack[pot + 1] = element;
        pot = pot + 1;
        cout<<pot<<endl;
        return pot;
    }
    else {
        cout<<"Error";
        // return pot;
    }
        
}    


