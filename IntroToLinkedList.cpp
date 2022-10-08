//LINKED LIST
#include<iostream>
using namespace std;

struct Node {
    Node* next;
    int value;
};
    
int main(){
    
    Node* head = new Node();
    Node* first = new Node();
    Node* second = new Node();
    Node* third = new Node();
    
    head->value = 42;
    head->next = first;
    first->value = 23;
    first->next = second;
    second->value = 18;
    second->next = third;
    third->value = 5;
    
    
    Node* node = head;
    while(node != NULL){
        cout<<node->value<<endl;
        node = node->next;
    }
    
}