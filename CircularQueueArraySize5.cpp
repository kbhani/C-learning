
#include<iostream>
using namespace std;

class CirQueue{
    

    
    const int size = 5;
    int array[5];
    int front = -1;
    int back = -1;

    public: 
        void enqueue(int num){
            if((back + 1) % size == front) {
                cout<<"Queue is full, cannot insert more elements in the Queue"<<endl;
            }
            else{
                back = (back + 1) % size;
                array[back] = num;
            }
        }
        void dequeue(){
            if((front == -1) && (back == -1)){
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
        cout<<"Press 1 for Enqueue, 2 for Dequeue, 3 to show front, 4 to show back and 5 to Exit "<<endl;
        cin>>choice;
        switch(choice)
        {
            case 1: cout<<"Enter a number to Enqueue "<<endl;
                    cin>>element;
                    queue1.enqueue(element);
                    break;
            case 2: queue1.dequeue();
                    break;
            case 3: cout<<queue1.showFront()<<endl;
                    break;
            case 4: cout<<queue1.showBack()<<endl;
                    break;
            case 5: exit(0);
                    
        }
    }
}