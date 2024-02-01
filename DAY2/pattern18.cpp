#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter a no:"<<endl;
    cin>>n;

    for(int i=1;i<=n;i++)
    {
        for(int k=1;k<=i-1;k++)
        {
            cout<<" ";
        }
        for(int j=i;j<=n;j++)
        {
        cout<<"*";
        }
        cout<<endl;
    }
return 0;
}