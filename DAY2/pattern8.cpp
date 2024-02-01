#include<iostream>
using namespace std;

int main()
{
    int n,x,count=0;
    cout<<"Enter a no."<<endl;
    cin>>n;

    for(int i=1;i<=n;i++)
    {
        x=i;
        count=i;
        for(int j=1;j<=count;j++)
        {
            cout<<x;
            x--;

        }
        cout<<endl;
    }
    return 0;
}