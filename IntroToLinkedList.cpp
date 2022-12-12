//LINKED LIST
#include<iostream>
#include<stdlib.h>
using namespace std;

struct Node {
    
    int data;
    struct Node* next;   //struct Node type ka pointer hai and it points towads this kind ok structure
};

void linkedListTraversal(struct Node* ptr){
    while(ptr != NULL){
        cout<<(ptr->data)<<endl;
        ptr = ptr->next;
    }    
}


int main(){
    
    struct Node * head;
    struct Node * second;
    struct Node * third;
    struct Node * fourth;

    //Allocate memory for nodes in the linked list in HEAP  
    head = (struct Node *) malloc(sizeof(struct Node));
    second = (struct Node *) malloc(sizeof(struct Node));
    third = (struct Node *) malloc(sizeof(struct Node));
    fourth = (struct Node *) malloc(sizeof(struct Node));
    
    // Link first and second nodes
    head->data = 42;
    head->next = second;

    // Link second and third nodes
    second->data = 23;
    second->next = third;

    // Link third and fourth nodes
    third->data = 18;
    third->next = fourth;

    // Terminate Linked List at the fourth node
    fourth->data = 1;
    fourth->next = NULL;

    
    linkedListTraversal(head);
}