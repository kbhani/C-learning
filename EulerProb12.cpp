#include <iostream>
#include <cmath>

using namespace std;
int main(){
    int i = 1;
    long long int sum = 0;
    int count = 0;
    long long int sum_of_series(int);
    
    while(count < 500){
        sum = sum_of_series(i);
        //cout<<sum<<endl;
        count = 0;
        for( int j = 1; j <= sqrt(sum); j++){ 
            
            if((sum) % j == 0){  
                if(j*j == sum){
                    count++;
                }
                else {
                    count = count + 2;
                }
                if (count >= 500){
                    cout<<sum<<" ";
                    break;
                }
                
            }    
        }
        
        i++;
        
    }
    
}   

long long int sum_of_series(int num_terms) {
    long long int sum;
    sum = (num_terms*(num_terms + 1))/2; 
    return sum;
}