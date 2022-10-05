
#include<iostream>
using namespace std;

class CirQueue{
    

    
    const int size = 5;
    int array[5];
    int front = -1;
    int back = -1;

    public: 
        bool isEmpty(){
            return front == -1 && back == -1;
        }
        bool isFull(){
            return front == (back + 1)%size;
        }
        void enqueue(int num){
            if((front == -1) && (back == -1)){
                front = 0;
                back = 0;
                array[back] = num;
            }
            else if(isFull()) {
                cout<<"Queue is full, cannot insert more elements in the Queue"<<endl;
            }
            else{
                back = (back + 1) % size;
                array[back] = num;
            }
        }
        void dequeue(){
            if(isEmpty()){
                cout<<"Queue is empty, cannot dequeue more elements from the Queue"<<endl;
                
            }
            else if(front == back){
                cout<<"The dequeued element is "<<array[front]<<endl;
                front = -1;
                back = -1;
            }
            else{
                cout<<"The dequeued element is "<<array[front]<<endl;
                front = (front + 1) % size; 
            }
        }
        int showFront(){
            return front;
        }
        int showBack(){
            return back;
        } 
        

};

int main(){
    int choice = 0;
    CirQueue queue1;
    int element;
    
    while(1){
        cout<<"Press 1 for Enqueue, 2 for Dequeue and 3 to Exit "<<endl;
        cin>>choice;
        switch(choice)
        {
            case 1: if(queue1.isFull()){
                        cout<<"Queue is full, cannot add more elements"<<endl;
                        break;
                    }
                    cout<<"Enter a number to Enqueue "<<endl;
                    cin>>element;
                    queue1.enqueue(element);
                    cout<<"Value of front is "<<queue1.showFront()<<endl;
                    cout<<"Value of back is "<<queue1.showBack()<<endl;
                    break;
            case 2: if(queue1.isEmpty()){
                        cout<<"Queue is empty, cannot dequeue more elements"<<endl;
                        break;
                    }
                    queue1.dequeue();
                    cout<<"Value of front is "<<queue1.showFront()<<endl;
                    cout<<"Value of back is "<<queue1.showBack()<<endl;
                    break;
            case 3: exit(0);
                     
                    
        }
    }
}