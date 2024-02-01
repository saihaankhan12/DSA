#include<iostream>
using namespace std;

int main()
{
    int n,f1=0,f2=1,f3;
    cout<<"Enter a no: "<<endl;
    cin>>n;

    for(int i=0;i<=n;i++)
    {
       f3=f1+f2;
       cout<<f3<<endl;
       f1=f2;
       f2=f3;
    }

    return 0;
}