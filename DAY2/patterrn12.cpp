#include<iostream>       
using namespace std;

int main()
{
    char c='A';
    int n,count=0;
    cout<<"Enter a no"<<endl;
    cin>>n;
    cout<<endl;
    for(int i=1;i<=n;i++)
    {
        count=i;
        for(int j=1;j<=count;j++)
        {
            cout<<c;
             c++;
        } 
        cout<<endl;
    }
    return 0;
}
