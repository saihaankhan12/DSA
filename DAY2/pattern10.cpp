#include<iostream>
using namespace std;
int main()
{
    char c='A';
    int n;
    cout<<"Enter a no."<<endl;
    cin>>n;

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<c;
            c++;
        }
        cout<<endl;
    }
    return 0;

}