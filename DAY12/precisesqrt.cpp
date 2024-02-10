#include<iostream>
using namespace std;

long long int sqrtint(int x)
{
    long long int low = 0,high = x,mid,ans;
    while(low<high)
    {
        mid = (low + high)/2;
        if(mid * mid == x)
        {
            return mid;
            break;
        }
        else if(mid * mid > x)
        {
            high = mid - 1 ;
        }
        else
        {
            ans = mid;
            low = mid + 1 ;
        }
    }
    return ans;
}

double moreprecise(int x,int precision,int soln )
{
    double factor = 1;   
    double ans = soln;
    for(int i = 0;i<precision;i++)
    {
        factor = factor/10;
          
        // 0.1
        //0.01 etc..

        for(double j = ans ; j*j < x ; j= j+factor)
        {
           ans = j;
        }
    }
    return ans;
}



int main()
{   
    int x,soln,precision; double a;
    cout<<"Enter a no: "<<endl;
    cin>>x;

    soln = sqrtint(x);  // int part  
 
    cout<<"No. of floating digits: "<<endl;
    cin>>precision;
    
    a = moreprecise(x,precision,soln);
    cout<<"The value is : "<<a;

    return 0;  
}