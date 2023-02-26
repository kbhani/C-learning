#include <iostream>
using namespace std;

class Queue{
    
    int array[5];
    int front = -1;
    int back = -1;
    
    
    public :
        void enqueue(int num){
            if(back == -1){ 
                back++;
                front++;
                array[back] = num;
            }
            else if(back < 4){
                back++;
                array[back] = num;
            }
            
        }
        int dequeue(){
            if((front == (back + 1)) || (back == -1)){
                return 0;
            } else {
                int removed = array[front];
                front++;
                return removed;
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
    Queue queue1;
    int element;
    cout<<"The value of front is "<<queue1.showFront()<<endl;
    cout<<"The value of back is "<<queue1.showBack()<<endl;
    
    while(choice != 3){
        cout<<"Press 1 for Enqueue, 2 for Dequeue and 3 to Exit "<<endl;
        cin>>choice;
        if(choice == 1){
            if(queue1.showBack() == 4){
                cout<<"Queue is full, no more elements can be added to it "<<endl;
            } else {
                cout<<"Enter a number to Enqueue "<<endl;
                cin>>element;
                queue1.enqueue(element);
                cout<<"The value of front is "<<queue1.showFront()<<endl;
                cout<<"The value of back is "<<queue1.showBack()<<endl;
            }
        }
        else if(choice == 2){
            
            if(queue1.showFront() == (queue1.showBack() + 1) || queue1.showFront() == -1){
                cout<<"Queue is empty, no elements stored so nothing to dequeue "<<endl;
            } else {
                element = queue1.dequeue();
                cout<<"The front most element was "<<element<<endl;
                cout<<"The value of front is "<<queue1.showFront()<<endl;
                cout<<"The value of back is "<<queue1.showBack()<<endl;
            }
        }
        else if (choice == 3){
            cout<<"Exited";
        }
        
        else {
            cout<<"Please read the instructions carefully and retry "<<endl;
        }
            
    }
    
    
    
}
