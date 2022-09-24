#include <iostream>

using namespace std;

int main()
{
    //int x, y, z;     
    //bool check_py_triplet (int, int, int);
    //int sqrt (int);
    int c;
    
    for(int b = 2; b < 998; b++){
        for(int a = 1; a < b; a++){
            c = 1000 - a - b;                           //ALTERNATIVELY    c = sqrt(a*a + b*b);
            if (a*a + b*b == c*c){                   //                             a + b + c = 1000;
                //x = a;
                //y = b;
                //z = c;
                cout<<a<<" "<<b<<" "<<c<<" "<<a*b*c<<endl;
            }
        } 
    }
    
    
    

   
}

//bool check_py_triplet ( int base, int perp, int hypo ){
//    if((base*base + perp*perp) == (hypo*hypo)){
//        return true;
//    }
//    else return false;
//}
//
//float sqrt ( float num ){
//    int x_1;
//    int x_0 = num/2;
//    for(int i = 0; i < 10; i++){
//        x_1 = (x_0 + (num/x_0))/2;
//        x_0 = x_1;
//    }
//}