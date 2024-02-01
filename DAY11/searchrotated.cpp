#include<iostream>
using namespace std;

int getpivot(int a[],int n)
{
    int low =0,high =n-1;
    while(low<high)
    {
        int mid = (low+high)/2;
        if(a[mid] >= a[0])
        {
          low = mid+1;
        }
        else
        {
           high = mid;
        }
    }
    return low;
}



int binsearch(int a[], int low,int high, int key)
{
    while(low<=high)
    {
        int mid = (low+high)/2;
        if(a[mid] == key)
        {
            return mid;
            break;
        }
        else if(a[mid] < key)
        {
            low = mid+1;
        }
        else
        {
            high = mid-1;
        }
    }
    return -1;
}




int main()
{
    int a[20],n,pivot,key,x = -1,y = -1;
    cout<<"Enter no. of elements: "<<endl;
    cin>>n;
  
    cout<<"Enter the elements: "<<endl;

    for(int i=0;i<n;i++)
    {
       cin>>a[i];
    }
    cout<<"Enter key "<<endl;
    cin>>key;



    pivot = getpivot( a, n ); // lowest element

    if(key >= a[pivot] && key <= a[n-1])
    {
      x = binsearch(a,pivot,n-1,key);  // binary search on 2nd line
    }

    else
    {
      y = binsearch(a,0,pivot - 1,key);  // binary search on 1st line
    }
    if(x >= 0)
    {
        cout<<"The index: "<<x;
    }
    else{
        cout<<"The index: "<<y;
    }

    return 0;
}




   


