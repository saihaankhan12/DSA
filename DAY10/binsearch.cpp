#include<iostream>
using namespace std;

void bsearch(int a[],int low, int high, int key,int n)
{
    int mid=0;  high = n - 1;
    while(low<=high)
    {
        mid = (low + high) / 2;
        if(a[mid]==key)
        {
          cout<<"Found:"<<mid<<endl;

          break;
        }
        else if( a[mid] > key )
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
}





int main()
{
    int a[20],n,low = 0,high,key;
    cout<<"Enter no. of elements: "<<endl;
    cin>>n;
  

    cout<<"Enter the elements: "<<endl;

    for(int i=0;i<n;i++)
    {
       cin>>a[i];
    }
    cout<<"Enter key "<<endl;
    cin>>key;

    bsearch( a, low , high , key , n );

    return 0;
}