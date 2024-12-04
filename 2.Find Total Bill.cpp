#include <iostream>
using namespace std;
int main() {
    int unit;
    cout<<"Enter the unit=";
    cin>>unit;
    if(unit>=0 && unit<=50){
        cout<<unit*12;
    }
    else if(unit>=50 && unit<=100){
        cout<<(50*12)+(unit-50)*15;
    }
    else if(unit>=100 && unit<=150){
        cout<<(50*12)+(50*15)+(unit-100)*18;
    }
    else if(unit>=150 && unit<=200){
        cout<<(50*12)+(50*15)+(50*18)+(unit-150)*20;
    }

    else{
        cout<<"Invail Input";
    }
}