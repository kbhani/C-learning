#include <iostream>
#include <cmath>
#include <string>

using namespace std;
int main(){
    
   struct {
       bool veg = false;
       bool dum = true;
       int marinationTime = 6;
       
       
    } biryani_1,biryani_2;

    int userMarinationTime;
    
    cout<<"dum biryani is ";
    if(biryani_1.dum == true){
        cout<<"the real way to cook biryani";    
    }
    else cout<<"becomes less tasty if not dummed"<<endl;
    
    if (biryani_1.veg == true){
        cout<<"Chicken or Mutton both are suitable or agar yahan tak aa gye ho to let us test your experience, kitna time marinate kiye the ? ";
        cin>>userMarinationTime;
    }
    else cout<<"Aap please panner tikka hi kha lo";
    
    
    
    
    
    
}


   
