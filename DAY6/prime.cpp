#include<iostream>
using namespace std;

void prime(int x)
{
    int count=0;
    for(int i=2;i<x;i++)   // edge case: 2 is prime
    {
        if(x%2 == 0)
        {
            count++;
        }
    }
    if(count == 0)
    {
        cout<<"Prime"<<endl;
    }
    else
    {
        cout<<"Not a prime"<<endl;

    }
}




int main()
{
    int n;
    cout<<"Enter num: "<<endl;
    cin>>n;
    prime(n);
    
    return 0;
}