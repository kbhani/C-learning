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

void pop(Node* &head){
    //cout<<endl<<"copy"<<&head<<endl;
    if(head == NULL){
        cout<<"Linked List is empty, cannot pop anything! "<<endl;    
    } else if(head->next == NULL){
        //cout<<endl<<"Pop-condition 2"<<endl;
        cout<<"Popped element is "<<endl<<head->data<<endl;
        head = NULL;
    } else {
        //cout<<endl<<"Pop-condition 3"<<endl;
        Node* link = head;
        while(link->next->next != NULL){    
            link = link->next;
        }
        cout<<"Popped element is "<<endl<<link->next->data<<endl;
        link->next = NULL;
    }

}

int main(){
    Node* head = new Node();
    //cout<<endl<<"original"<<&head<<endl;
    int array[] = {7, 5};
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
            if(head == NULL){
                head = new Node();    
            }
            push(head, numToPush);
            printLinkedList(head);
        } else if(choice == 2){
            pop(head);
            //printLinkedList(head);
        } else {
            cout<<endl<<"Exiting "<<endl;
            break;
        }
    }
}