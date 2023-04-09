#include<iostream>
#include<string>
#include<math.h>

using namespace std;

class Employee{
    private:
        string name;
        int years;
        int basic;
        
    public:
        void employeeSetter(string employee_name, int input_years, int input_basic){
            name = employee_name;
            years = input_years;
            basic = input_basic;
            cout<<"Inputs are recorded ";
            cout<<name<<" "<<years<<" "<<basic<<endl;
        }
        
        float appraisal(float percentage){
            return basic*(pow((1 + (percentage/100)), years)) - basic*(pow((1 + (percentage/100)), (years-1)));   
        }
        
        
        
};

int main(){
    Employee gago;
    string name;
    int years;
    int basic;
    cout<<"Enter the details of the Employee, in the order NAME first, then his/her EXPERIENCE at the organisation, followed by his/her STARTING SALARY "<<endl;
    cin>>name>>years>>basic;
    gago.employeeSetter(name,years,basic);
    cout<<endl;
    cout<<name<<" has an increment of "<<gago.appraisal(10); 
    
    
    
}