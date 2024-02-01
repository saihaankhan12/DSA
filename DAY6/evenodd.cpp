#include<iostream>
using namespace std;

void evenodd(int n)
{
    if(n % 2 == 0)
    {
        cout<<"Even num"<<endl;
    }
    else
    {
        cout<<"Odd num"<<endl;
    }
}


int main()
{
    int x;
    cout<<"Enter a number"<<endl;
    cin>>x;
    evenodd(x);

    return 0;
}