#include<iostream>
using namespace std;

int main()
{
    int n,count=0;
    cout<<"Enter a no."<<endl;
    cin>>n;

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            count++;
            cout<<count<<"  ";
        }
        cout<<endl;
    }
    return 0;
}