#include<iostream>
using namespace std;

int main()
{
    int n,count=0;
    char c;
    cout<<"Enter a no."<<endl;
    cin>>n;

    for(int i=1;i<=n;i++)
    {
        count=i;
        for(int j=1;j<=count;j++)
        {   
           c='A'+i+j-2;
           cout<<c; 
        }
        cout<<endl;
    }
    return 0;
}