#include<iostream>
using namespace std;

struct Node{
    int data;
    Node* next;
};

void printLinkedList(Node* head){
    Node* link = head;
    while(link != NULL){
        cout<<link->data<<" ";
        link = link->next;
        
    }  
    cout<<endl;
}


void push(Node* head, int num){
    Node* link = head;
    while(link->next != NULL){
        link = link->next;    
    }
    link->next = new Node;
    link = link->next;
    link->data = num;
}

void pop(Node* head){
    Node* link = head;
    if(link == NULL){
        cout<<"Linked List is empty, cannot pop anything! "<<endl;    
    } else if(link->next == NULL){
        delete head;
        head = NULL;
    } else {
        Node* temp = head;
        while(temp->next != NULL){
            cout<<"temp--inside ";
            printLinkedList(temp);
            cout<<"link--inside ";
            printLinkedList(link);
            link = temp;
            temp = temp->next;
            
        }
        cout<<"temp--outside ";
        printLinkedList(temp);
        cout<<"link--outside ";
        printLinkedList(link);
        link->next = NULL;
        delete temp;
        temp = NULL;
    }

}



int main(){
    
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
    printLinkedList(head);
    cout<<endl;
    cout<<"^ This is the Linked List "<<endl<<endl;
    while(choice != 3){
        cout<<"Enter 1 to push a number , 2 to pop and 3 to exit "<<endl;
        cin>>choice;
        if(choice == 1){
            int numToPush;
            cout<<"Enter a number to push ";
            cin>>numToPush;
            push(head, numToPush);
            printLinkedList(head);
        } else if(choice == 2){
            pop(head);
            printLinkedList(head);
        } else {
            cout<<endl<<"Exiting "<<endl;
            break;
        }
    }
}
