#include <iostream>
using namespace std;

struct Stack {
    private :
        int array[5];
        int top = -1;
    
    public :
        void push(int num){
            if (top < 4){                                               //OVERFLOW
                top++;
                array[top] = num;
            }    
        } 
        
        int pop(){
            if (top == -1){                                             //UNDERFLOW                                                                
                return 0;
            }
            else {
                int removed = array[top];
                top--;
                return removed;
            }
        }
    int showTop(){
        return top;
    }
        
}; 

int main()
{
    int choice = 0;
    Stack stack1;
    int element;
    
    while(choice != 3){
        cout<<"Press 1 for push, 2 for pop and 3 for exit "<<endl;
        cin>>choice;
        if (choice == 1){
            if(stack1.showTop() == 4){
                cout<<"Stack is full, no more elements can be stored in it"<<endl;
            } else {      
                cout<<endl<<"Enter a number to push "<<endl;
                cin>>element;
                stack1.push(element);
                cout<<"The value of top is "<<stack1.showTop()<<endl;
            }    
        }
        else if (choice == 2){
            element = stack1.pop();
            if(stack1.showTop() == -1){
                cout<<"Stack is empty, no elements stored so nothing to pop"<<endl;    
            }
            else {
                cout<<"The top most element was "<<element<<endl;
                cout<<"The value of top is "<<stack1.showTop()<<endl;
            }
        }
        else if (choice == 3){
            cout<<"Exited";
            
        }
        else {
            cout<<"Please read the instructions carefully and retry";
        }
    }
}
