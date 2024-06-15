#include<iostream>
using namespace std;

void bsearch(int a[],int low,int high,int key)
{
    int mid = (low + high)/2;
    if(a[mid] == key)
    {
        cout<<"Element found at : "<<mid<<endl;
    }
    else if (a[mid] > key)
    {
        return bsearch(a,low,mid-1,key);
    }
    else
    {
        return bsearch(a,mid+1,high,key);
    }
}


int main()
{
    int a[20],n,low = 0,high,key;
    cout<<"Enter no. of elements: "<<endl;
    cin>>n;
    high = n-1;
  

    cout<<"Enter the elements: "<<endl;

    for(int i=0;i<n;i++)
    {
       cin>>a[i];
    }
    cout<<"Enter key "<<endl;
    cin>>key;

    bsearch( a, low , high , key );
   

    return 0;
}