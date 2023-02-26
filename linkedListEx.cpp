#include<iostream>
#include<string>
using namespace std;

struct
{
    string FirstName;
    string LastName;
    float pro;
    int numberOfGames;
    int angerQuotient;

}Guzma, Rajiv;

int main() {

     
    Guzma.FirstName = "Arunesh";
    Guzma.LastName = "Sarin";
    Guzma.pro = 0.75;
    Guzma.numberOfGames = 10;
    Guzma.angerQuotient = 3;

    Rajiv.FirstName = "Rajiv";
    Rajiv.LastName = "Gupta";
    Rajiv.pro = 0.45;
    Rajiv.numberOfGames = 3;
    Rajiv.angerQuotient = 10;

    cout<<Guzma.FirstName<<endl;
    cout<<Rajiv.FirstName;
    
}