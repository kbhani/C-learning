#include<iostream>
using namespace std;

union money {
    //data
    int rice; //4 bytes
    char car;   // 1 bytes
    float pounds; // 4 bytes

    //if struct was used to make this DS, 9 memeory bytes wouold have been used for an object, but with union only required and particular data will be used.
};




int main() {
    enum Meal{ breakfast, lunch, dinner };
    Meal m1 = breakfast;
    cout<<m1;   // will print 0
    cout<<breakfast;     // will print 0
    cout<<lunch;     // will print 1
    cout<<dinner;    // will print 2
}