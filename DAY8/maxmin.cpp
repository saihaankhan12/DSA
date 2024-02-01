#include<iostream>
using namespace std;

int main()
{
    int n,a[30],min,max;
    cout<<"Enter no. of elements: "<<endl;
    cin>>n;

    cout<<"Enter the elements"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }

    max = a[0];
    cout<<"The largest element: "<<endl;
    for(int i=0;i<n;i++)
    {
        
        if(a[i]>max)
        {
           max = a[i];
        }
    }
    cout<<max<<endl;

    min = a[0];
    cout<<"The smallest element: "<<endl;
    for(int i=0;i<n;i++)
    {
        ;
        if(a[i]<min)
        {
           min = a[i];
        }
    }
    cout<<min<<endl;

    return 0;
}