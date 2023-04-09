#include<iostream>
using namespace std;


class Complex{
    int a , b;
    public:
    // creating a constructor
    // Constructor is a special member function with the same name as of the class
    // it is used to initialize the objects of its class
    // it is automatically invoked whenever an object is created

    Complex();   // constructor declaration
    void printNumber(){
        cout<<"Your number is "<<a<<" + "<<b<<"i"<<endl;
    }
};

Complex :: Complex(){    // this is a default constructor as it takes no parameters
    a = 10;
    b = 0;

}

int main(){
    Complex c1,c2,c3;
    c1.printNumber();
    c2.printNumber();
    c3.printNumber();
 
}



// Properties of constructors
// 1. It should be declared in the public section of the class
// 2. They are automatically invoked whenever the object is invoked
// 3. They cannot return values and do not have return types
// 4. It can have default arguments 
// 5. We cannot refer to their address ***