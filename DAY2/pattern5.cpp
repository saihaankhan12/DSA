#include<iostream>
using namespace std;

int main()
{
    int n,count=0;
    cout<<"enter a no."<<endl;
    cin>>n;

    for(int i=0;i<n;i++)
    {
        count=i;
        for(int j=0;j<=count;j++)
        {
            cout<<"*";

        }
        cout<<endl;
    }
    return 0;
}