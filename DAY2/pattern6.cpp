#include<iostream>
using namespace std;

int main()
{
    int n,count=0;
    cout<<"Enter no."<<endl;
    cin>>n;

    for(int i=1;i<=n;i++)
    {
        count=i;
        for(int j=1;j<=count;j++)
        {
            cout<<count;
        }
        cout<<endl;
    }
    return 0;
}