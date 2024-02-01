#include<iostream>
using namespace std;

int main()
{
    char c;
    int n,count;

    cout<<"Enter a no."<<endl;
    cin>>n;

    for(int i=1;i<=n;i++)
    { 
        count=i;
        c='A'+n-i;
        for(int j=1;j<=count;j++)
        {
            cout<<c;
            c++;
        } 
        cout<<endl;
    }
    return 0;
}