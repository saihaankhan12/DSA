#include<iostream>
using namespace std;

int main()
{
    int a,b,x;
    
   do
   { 
    cout<<"Choose: 1) ADD 2) SUBTRACT 3) DIVIDE 4)MULTI 5) EXIT"<<endl;
    cin>>x;

    switch(x)
    {
        case 1: cout<<"Enter 2 nos: "<<endl;
                cin>>a>>b;
                cout<<"The value is: "<<a+b<<endl;
                break;

        case 2: cout<<"Enter 2 nos: "<<endl;
                cin>>a>>b;
                cout<<"The value is: "<<a-b<<endl;
                break;

        case 3: cout<<"Enter 2 nos: "<<endl;
                cin>>a>>b;
                cout<<"The value is:"<<a/b<<endl;
                break;


        case 4: cout<<"Enter 2 nos: "<<endl;
                cin>>a>>b;
                cout<<"The value is:"<<a*b<<endl;
                break;
            
    }
   } while ( x!= 5);
   
    return 0;
}