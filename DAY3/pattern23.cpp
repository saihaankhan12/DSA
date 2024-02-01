#include<iostream>
using namespace std;

int main()
{
    int n,x;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n-i+1;j++)
        {
            cout<<j;
            x=j;
        }
        for(int k=1;k<=i-1;k++)
        {
            cout<<"*";
        }
        for(int a=1;a<=i-1;a++)
        {
            cout<<"*";
        }
        for(int b=x;b>=1;b--)
        {
            cout<<b;
        }
        cout<<endl;
    }
    return 0;
}