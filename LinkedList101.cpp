//LINKED LIST
#include<iostream>
using namespace std;

struct Node {
    Node* next;
    int value;
    
};
    
int main(){
    
    Node* head = new Node();
    int array[] = {23,5,2,1,9,7,4,1,1,1,1,1,1,1};
    int n = (sizeof(array))/sizeof(array[0]);
    Node* node = head;
    //LINKED LIST CONSTRUCTION
    for(int i = 0; i < n; i++){
        node->value = array[i];
        if(i < (n-1)){
            node->next = new Node();
            node = node->next;    
        }
    }
    
    //LINKED LIST TRAVERSAL    
    node = head;
    while(node != NULL){
        cout<<node->value<<endl;
        node = node->next;
    }
    
}
/* 
    1. Do not print the linkedlist.
    2. Add a new number to the end of the linkedlist.
    3. This new number should be entered by the user.
    4. Print entire linkedlist now.
*/