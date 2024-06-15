#include<iostream>
using namespace std;


void reverse(int a[],int n)
{
   int i=0,j=n-1;
   while(i<j)
   {
    swap(a[i],a[j]);
    i++,j--;
   }
}

void print(int a[],int n)
{
    cout<<"The rev array : "<<endl;
    for(int i=0;i<n;i++)
    {
        cout<< a[i]<< " ";
    }
}

int main()
{
    int a[10],n;
    cout<<"No. of elements : "<<endl;
    cin>>n;
    cout<<"Enter the elements: "<<endl;

    for(int i=0;i<n;i++)
    {
       cin>>a[i];
    }

    reverse(a,n);
    print(a,n);

    return 0;
}