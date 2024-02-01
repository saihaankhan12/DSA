#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    int i=0,n;
    int digit,ans=0;
    cin>>n;
    while(n!=0)
    {
        digit = n%10;
        if(digit==1)
        {
        ans = ans + pow(2,i);
        }
        n=n/10;
        i++;  
    }
    cout<<ans;
    return 0;
}