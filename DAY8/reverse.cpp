#include<iostream>
using namespace std;

void reverse(int a[],int n)
{
   int start = 0;
   int end = n-1;
   while(start<=end)
   {
    swap(a[start],a[end]);
    start++;
    end--;
   }
}

void printarray(int a[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<a[i];
    }
}


int main()
{
    int n,a[30];
    cout<<"Enter size: "<<endl;
    cin>>n;

    cout<<"Enter elements: "<<endl;
    for(int i=0;i<n;i++)
    {
       cin>>a[i];
    }

    reverse(a,n);
    printarray(a,n);

    return 0;
}