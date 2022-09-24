#include <iostream>
using namespace std;

class Queue{
    
    int array[5];
    int front = -1;
    int back = -1;
    
    
    public :
        void enqueue(int num){
            if (back < 4){
                if (front == -1){
                    front++;
                    back++;
                    array[back] = num;
                } else {
                    
                    back++;
                    array[back] = num;
                }
            }
        }
        int dequeue(){
            int removed = array[front];
            return removed;
            front++;
        }
        int showFront(){
            return front;
        }  
        int showBack(){
            return back;
        }
};

int main(){
    Queue queue1;
    int choice = 0;
    int element;
    
    while(choice != 3){
        cout<<"Press 1 for enqueue, 2 for dequeue and 3 for exit "<<endl;
        cin>>choice;
        if(choice == 1){
            if(queue1.showBack() == 4){
                cout<<"Queue is full, no more elements can be stored in it"<<endl;
            } else {      
                cout<<endl<<"Enter a number to enqueue "<<endl;
                cin>>element;
                queue1.enqueue(element);
                cout<<"The value of front is "<<queue1.showFront()<<endl<<"The value of back is "<<queue1.showBack()<<endl;    
            }      
        }
        else if(choice == 2){
            if(queue1.showFront() == (queue1.showBack() + 1)){
                cout<<"Queue is empty, no elements stored so nothing to dequeue"<<endl;
            }
            else {
                cout<<"The dequeued element is "<<element<<endl;
                cout<<"The value of front is "<<queue1.showFront()<<endl;
            } 
            
        }
        if(choice == 3){
            cout<<"Exited";
            }
    }
}
