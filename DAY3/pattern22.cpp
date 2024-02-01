#include<iostream>
using namespace std;

int main()
{
    int i,n;
    cout<<"Enter a no:"<<endl;
    cin>>n;

    for(int i=1;i<=n;i++) 
    {

     for(int j=1;j<=n-i;j++)  //1st triangle
     {
        cout<<" ";
     }

     for(int j=1;j<=i;j++) //2nd triangle
     {
        cout<<j;
     }

int start=i-1;

while(start) //3rd triangle
{
    cout<<start;
    start--;
}
     
     cout<<endl;
    }
    return 0;
}