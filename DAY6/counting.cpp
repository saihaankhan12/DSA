#include<iostream>
using namespace std;

void counting(int x)
{
    for(int i=1;i<=x;i++)
    {
        cout<<i<<endl;
    }
}



int main()
{
    int n;
    cout<<"count till: "<<endl;
    cin>>n;

    cout<<"Count starts now:"<<endl;
    counting(n);
    
    return 0;
}