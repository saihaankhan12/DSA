#include<iostream>

using namespace std;


int power(int a,int b)
{
    int ans = 1;
    for(int i=1;i<=b;i++)
    {   
        ans = ans * a; 
    }
    return ans;
}

int main()
{
    int x,a,b,count=0;
    cout<<"No. of times you wanna find the power: "<<endl;
    cin>>count;

    for (int i = 1; i <=count; i++)
    {
    cout<<"Enter two nos."<<endl;
    cin>>a>>b;
    x = power(a,b);
    cout<<x<<endl;
    }

    return 0;
}