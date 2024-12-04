#include <iostream>
using namespace std;
int main() {
    int CP, SP, profit,Loss, total;
    cout<<"Enter CP =";
    cin>>CP;
    cout<<"Enter SP =";
    cin>>SP;
    if(SP==CP){
        cout<<"No Loss, No Profit";
    }
   else if(SP>CP){
        cout<<"Profit =";
        profit = SP-CP;
        cout<<profit;
        cout<<"\nTotal Bill include GST=";
        total=SP + SP*15/100;
        cout<<total;
    }
    else if(SP<CP){
        cout<<"Loss =";
        Loss=CP-SP;
        cout<<Loss;
        cout<<"\nTotal Bill include GST=";
        total=SP + SP*15/100;
        cout<<total;
        
    }
   else{
       cout<< "Good Bye";
    }
}