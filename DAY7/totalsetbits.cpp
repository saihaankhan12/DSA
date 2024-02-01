#include<iostream>
using namespace std;

int setbits(int x)
{   
    int count=0;
    while(x != 0 )
    {
        if( x&1 )
        {
            count++;
        }
        x = x>>1;
       
    }
    return count;
}



int main()
{
    int a,b,bit = 0;
    cout<<"Enter how many nos. bits you wanna find: "<<endl;
    cin>>a;
   

  for(int i=1;i<=a;i++)
  {
    cout<<"Enter the number: "<<endl;
    cin>>b;
    bit = bit + setbits(b);
  }

   cout<<"The total no. of set bits: "<< bit<<endl;

   return 0;
}