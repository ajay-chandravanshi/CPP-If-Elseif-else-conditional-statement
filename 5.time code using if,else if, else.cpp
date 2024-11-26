#include <iostream>
using namespace std;
int main(){
    int time;
    cout<<"Enter the time=";
    cin>>time;
    if (time < 12) 
    {
    cout << "Good Morning.";
    } 
    else if (time < 16) 
    {
    cout << "Good Afternoon.";
    } 
    else if(time < 20)
    {
     cout << "Good Evening.";
    }
    else
    {
     cout << "Good Night.";
    }
}
