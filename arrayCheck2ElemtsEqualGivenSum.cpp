#include <iostream>                          //& ==> (Address of) Operator  
using namespace std;                         //* ==> (Dereferencing) Operator


//try to make a program for the two pointer problem
//basically
//ek array hoga filled with some numbers
//you have check FIRST two numbers who sum will be x
//x will be input
//if no such numbers exist then say so

int main(){
    
    //int a = 3;
    //int* b = &a;                //b is of type 'pointer of an integer'
    //int** c = &b;               //c is a pointer to a pointer
    
    //cout<<&a<<endl;                     
    //cout<<b<<endl;              //this line will print b (which holds address of a)               
    //cout<<*b<<endl;             //this line will dereference b first and then print where b is pointing to
    //cout<<c<<endl;              //this line will print c (which holds address of b[which itself is a pointer]))
    //cout<<*c<<endl;              //this line will dereference c first and then print where c is pointing to
    //cout<<**c<<endl;            //this line will dereference c twice and then print 3 because c was pointing towrads b and b was pointing towads a

    int array[] = {6,3,2,5,0,4,6,7,1,2};
    int sum = 50;
    
    int med;
    bool check = false;
    
    
    for(int i = 0; i < 10; i++){
        med = array[i];
        for(int j = (i+1); j < 10; j++){
            if((med + array[j]) == sum){
                check = true;
                cout<<array[i]<<" and "<<array[j]<<" present at the index "<<i<<" and "<<j<<" respectively"<<endl;
                break;
            }
        }
        if(check == true){
            break;
        }
    }
    if(!check){
        cout<<"No such pair exists";
    }
    
    





}  