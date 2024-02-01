#include<iostream>
using namespace std;

int main()
{
    int n;
    char c;
    cout<<"Enter a no."<<endl;
    cin>>n;
    c='A';


    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<c;

        }
        c++;
        cout<<endl;
    }
    return 0;
}
