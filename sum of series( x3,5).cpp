// Example program
#include <iostream> // essential libraries
#include <string> // essential libraries
using namespace std;

int main(){
    int sum = 0;
    int k;
    float sum_of_series(float, float, float);
    cout << "Enter the limit ";
    cin >>k;
    sum = sum_of_series( 3, k/3, 3 ) + sum_of_series( 5, k/5, 5 ) - sum_of_series( 15, k/15, 15 );
    cout <<sum<<endl;
}
float sum_of_series(float first_term, float num_terms, float diff) {
    float sum;
    sum = ((num_terms)/2)*(2*first_term + (num_terms - 1)*diff); 
    
    return sum;
}