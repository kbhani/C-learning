//LINKED LIST
#include<iostream>
using namespace std;

struct Node {
    Node* next;
    int value;
    
};
    
int main(){
    
    Node* head = new Node();

    int array[] = {7,5,2,1,9,7,};
    
    int n = (sizeof(array))/sizeof(array[0]);

    Node* link = head;
    //LINKED LIST CONSTRUCTION
    for(int i = 0; i < n; i++){
        link->value = array[i];
        if(i < (n-1)){
            link->next = new Node();
            link = link->next;    
        }
    }
    
    //LINKED LIST TRAVERSAL    
    link = head;
    while(link != NULL){
        cout<<link->value<<endl;
        link = link->next;
    }
    


}

/* 
    1. Do not print the linkedlist.
    2. Add a new number to the end of the linkedlist.
    3. This new number should be entered by the user.
    4. Print entire linkedlist now.
*/

