#include<iostream>
using namespace std;

int pivot(int a[],int n)
{
    int low = 0,high = n - 1;
    while(low<high)
    {
        int mid = (low + high)/2;
        if(a[mid] >= a[0])
        {
            low = mid + 1;
        }
        else
        {
            high = mid;
        }
    }
    return low;  // or high
}


int main()
{
    int a[20],n,x;
    cout<<"Enter no. of elements: "<<endl;
    cin>>n;
  

    cout<<"Enter the elements: "<<endl;

    for(int i=0;i<n;i++)
    {
       cin>>a[i];
    }

   x = pivot( a, n );
   cout<<"The pivot: "<<x;

    return 0;
}