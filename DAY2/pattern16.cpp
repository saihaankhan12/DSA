#include<iostream>
using namespace std;

int main()
{
    int n,count=0;
    
    cout<<"Enter a no."<< endl;
    cin>>n;


    for(int i=1;i<=n;i++)
    {
        count=i;
        for(int k=1;k<=n-i;k++) //loop for printing space
        {
        cout<<" ";
        }
        for(int j=1;j<=count;j++)
        {
        cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}
/*  Question:


   *
  **
 ***
****


*/