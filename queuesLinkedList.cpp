#include <iostream>
using namespace std;

struct Node{
    int data;
    Node* next;
};

void Enqueue(Node* head, int num){
    Node* link = head;
    while(link->next != NULL){
        link = link->next;
    }
    link->next = new Node;
    link = link->next;
    link->data = num;
}
Node* Dequeue(Node* head){
    if(head == NULL){
        return 0;
    } else {
        cout<<"Dequeued element is "<<head->data<<endl;
        head = head->next;
        //cout<<"*"<<head->data<<endl;
        return head;
    }
}


void printLinkedList(Node* head){
    Node* link = head;
    while(link != NULL){
        cout<<link->data<<" ";
        link = link->next;
        
    }    
}
int main() {
    
    Node* head = new Node();
    int array[] = {7,5,2,1,9,7};
    int n = (sizeof(array))/sizeof(array[0]);
    Node* link = head;
    for(int i = 0; i < n; i++){
        link->data = array[i];
        if(i < (n-1)){
            link->next = new Node();
            link = link->next;    
        }
    }
    int choice = 0;
    
    while(choice != 3){
        cout<<"Enter 1 to enqueue a number , 2 to dequeue and 3 to exit ";
        cin>>choice;
        if(choice == 1){
            int numToEnqueue;
            cout<<"Enter a number to enqueue ";
            cin>>numToEnqueue;
            Enqueue(head, numToEnqueue);
            printLinkedList(head);
        } else if(choice == 2){
            head = Dequeue(head);
            if(!head){
                cout<<"Nothing to Dequeue, linked list is empty "<<endl;
            }
            printLinkedList(head);
        } else {
            cout<<endl<<"Exiting "<<endl;
            break;
        }

    }
     
}