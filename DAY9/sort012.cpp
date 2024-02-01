#include<iostream>
using namespace std;

void sort012(int a[],int n)
{
    
}



int main()
{
    int a[20],n;
    cout<<"Enter no. of elements: "<<endl;
    cin>>n;

    cout<<"Enter the elements: "<<endl;

    for(int i=0;i<n;i++)
    {
       cin>>a[i];
    }

    sort012(a,n);

    for(int i=0;i<n;i++)
    {
        cout<<a[i];
    }

    return 0;
}