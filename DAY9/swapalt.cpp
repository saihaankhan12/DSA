#include<iostream>
using namespace std;

void swapalt(int a[],int n)
{
    for(int i=0;i<n;i=i+2)    // 
    {
        if(i+1<n)
        {
            swap(a[i],a[i+1]);

        }
    }
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

    swapalt(a,n);

    for(int i=0;i<n;i++)
    {
        cout<<a[i];
    }

    return 0;
}