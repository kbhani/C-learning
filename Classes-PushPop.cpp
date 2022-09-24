#include <iostream>
using namespace std;

class Stack {                                                           
    
    int array[10];                                                      //Stack Container ----> kept private to protect variables from manipulation
    int top = -1;                                                       //top is the index of the current topmost filled element
    
    public :
        void push(int num){                                             
            if (top < 9){                                               //OVERFLOW ---->top's value beyond 9 will create unwanted result (bcz top can have max value 9 and pushing more elements is impossible)
                top++;                                                  //when "pushing", top's value will increase by 1 bcz we did 'pushing 1 element'
                array[top] = num;
            }    
        } 
        
        int pop(){
            if (top == -1){                                             //UNDERFLOW---->top's value lesses than -1 will create unwanted result (bcz top can have min value -1 and popping more elements is impossible)                                                                
                return 0;                                               //if the stack is empty---->cannot pop anything
            }
            else {
                int removed = array[top];                               //when "popping", top's value will decrease by 1 bcz we did 'popping 1 element'
                top--;
                return removed;
            }
        }
        int showTop(){                                                  //to prevent manipulation of "top" variable we defined a showTop function so that viewing top's value becomes seemless
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
            if(stack1.showTop() == 9){
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
