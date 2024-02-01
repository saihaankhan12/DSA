#include<iostream>
using namespace std;

int facto(int x)
{
    int fact = 1;
    for(int i=1;i<=x;i++)
    {
        fact = fact * i;
    }
    return fact;
}

void ncr(int n,int r)
{
    int num = facto(n);
    int denom = facto(r) * facto(n-r);
    int a = num/denom;
    cout<<"The ncr value is: "<<a<<endl;
}

int main()
{
    int n,r;
    cout<<"Enter n and r values: "<<endl;
    cin>>n>>r;
    
    ncr(n,r);

    return 0;
}