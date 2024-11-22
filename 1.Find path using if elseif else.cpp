#include <iostream>
using namespace std;
int main() {
    int p;
    cout<<"Enter the path";
    cin>>p;
    if(p==1)
    {
        cout<<"Enter the path";
        cin>>p;
        if(p==2)
        {
            cout<<"Enter the path";
            cin>>p;
            if(p==4)
            {
                cout<<"Destination Reached";
            }
            else{
                cout<<"Invalid Input";
            }
        }
    

    else if(p==3){
           cout<<"Enter the path";
           cin>>p;
            if(p==4)
            {
                cout<<"Destination Reached";
            }
            else{
                cout<<"Invalid Input";
            }
    }

     else if(p==4)
            {
                cout<<"Destination Reached";
            }
            else{
                cout<<"Invalid Input";
            }
}        
            
     else{
                cout<<"Invalid Input";
            }      

}