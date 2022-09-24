// Example program
#include <iostream> // essential libraries
#include <string> // essential libraries
using namespace std;

int main(){
    int sqr ( int );
    int num;
    int sum_sqrs = 0;
    long int sqr_sum = 0;
    int sum = 0;
    int med = 0;
    
    cout<<"Enter a natural number "<<endl;
    cin>>num;
    
    
    for( int i = 1; i <= num; i++ ){        // square of sum
        sum = sum + i;
    }
    sqr_sum = sqr(sum);
    
    
    for( int i = 1; i <= num; i++ ){        // sum of sqaures  
        med = sqr(i);
        sum_sqrs = sum_sqrs + med;
        
    }
    
    
    cout<<"The difference of the sum of the squares of entered value and the square of their sum is "<<(sqr_sum) - (sum_sqrs)<<endl;    
    
    
}


int sqr(int input) 
{  
    int k;        
    k = input*input; 
    return k;
}

