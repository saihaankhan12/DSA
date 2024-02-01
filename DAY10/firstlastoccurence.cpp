#include<iostream>
using namespace std;

int firstoccur(int a[], int key,int n)
{
    int mid=0,low = 0, ans = -1,high = n - 1;
    while(low<=high)
    {
        mid = (low + high) / 2;
        if(a[mid]==key)
        {
        ans = mid;   //  index is stored. it gets updated if found another same key in left part.

        high = mid - 1; // we check first occurence in left part of mid.
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

    return ans;
}


int lastoccur(int a[], int key,int n)
{
    int mid=0,low = 0, ans = -1,high = n - 1;
    while(low<=high)
    {
        mid = (low + high) / 2;
        if(a[mid]==key)
        {
        ans = mid;   //  index is stored. it gets updated if found another same key in right part.

        low = mid + 1; // we check first occurence in left part of mid.
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

    return ans;
}





int main()
{
    int a[20],n,low = 0,high,key,x,y;
    cout<<"Enter no. of elements: "<<endl;
    cin>>n;
  

    cout<<"Enter the elements: "<<endl;

    for(int i=0;i<n;i++)
    {
       cin>>a[i];
    }
    cout<<"Enter key "<<endl;
    cin>>key;

    x = firstoccur( a,key , n );
    cout<<"First occurence: "<<x<<endl;

    y = lastoccur( a,key , n );
    cout<<"last occurence: "<<y<<endl;

    return 0;
}

// total no. of occurences:
// (last index - first index) + 1