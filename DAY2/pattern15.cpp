#include<iostream>
using namespace std;
int main()
{
    char c='A';
    int n;
    cout<<"Enter a no."<<endl;
    cin>>n;

    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            cout<<c;
            c++;
        }
        c=c-2;
        cout<<endl;
       
    }
    return 0;

}