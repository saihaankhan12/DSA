#include<iostream>
using namespace std;

void print(int a[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<endl;
    }
}


int main()
{
    int a[10],n,b=1;
    cout<<"Enter size"<<endl;
    cin>>n;

    cout<<"Enter"<<endl;
    
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }

    cout<<"Before"<<endl;
    print(a,n);

    a[3]= 28;

    cout<<"After : "<<endl;
    print(a,n);
    cout<<endl;

    cout<<b<<endl;
    cout<<b++<<endl;  // post : incr after sometime
    cout<<b;



    return 0;
}