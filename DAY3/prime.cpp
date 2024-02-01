#include<iostream>
using namespace std;

int main()
{
    int n,count=0;
    cout<<"Emter a no.:"<<endl;
    cin>>n;

    for(int i=2;i<n;i++)       //if <= taken then num gets divided by 'i'  which results to 'not a prime' even if its a prime
                           
    {
        if(n%i==0)                     // edge case: 2 is prime
        {
            count++;                   
            break;
        }
    }

        if(count==0)
        {
            cout<<"Prime no."<<endl;
        }
        else{
            cout<<"Not a prime"<<endl;
        }
 return 0;
}