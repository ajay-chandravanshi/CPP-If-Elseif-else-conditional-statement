#include <iostream>
using namespace std;
int main() {
     int unit;
     cout<<"Enter unit";
     cin>>unit;
     int bill;
     if(unit>=0 && unit<=50)
     {
         bill=unit*10;
         cout<<bill;
     }
     else if(unit>=51 && unit<=100)
     {
         bill=50*10+((unit-50)*15);
         cout<<bill;
     }
     else if(unit>=101 && unit<=150)
     {
         bill=50*10+50*15+((unit-100)*20);
         cout<<bill;
     }
     else if(unit>=151 && unit<=200)
     {
         bill=50*10+50*15+50*20+((unit-150)*25);
         cout<<bill;
     }
     else{
         bill=50*10+50*15+50*20+50*25+(unit-200)*30;
         cout<<bill<<endl;
         cout<<"Thanks for Visit";
         }
     
}