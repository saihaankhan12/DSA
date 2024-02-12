#include<iostream>
using namespace std;

int partition(int a[],int low,int high)
{
    int pivot = a[low];
    int cnt=0;
    for(int i=low+1;i<=high;i++)
    {
        if(a[i]<=pivot)
        {
            cnt++;
        }
    }
    
    //place pivot at right position
    int pivotindex = low + cnt;
    swap(a[pivotindex],a[low]);

    //left and right part
    int i = low,j = high;

    while(i<pivotindex && j>pivotindex)
    {
       while(a[i]<pivot)
       {
        i++;
       }

       while(a[j]>pivot)
       {
        j--;
       }

       if(i<pivotindex && j>pivotindex)
       {
        swap(a[i++],a[j--]);
       }

       return pivotindex;
    }
}



void quicksort(int a[],int low ,int high)
{
    //base case
     if(low>=high)
     {
        return;
     }

     //partition
     int p = partition(a,low,high);

     //left part sort
    quicksort(a,low,p-1);

    //right sort
    quicksort(a,p+1,high);

}


int main()
{
    int a[20],n,low = 0,high;
    cout<<"Enter no. of elements: "<<endl;
    cin>>n;
    high = n-1;

    cout<<"Enter the elements: "<<endl;

    for(int i=0;i<n;i++)
    {
       cin>>a[i];
    }

    quicksort( a, low , high);

    cout<<"The sorted array : "<<endl;
    for(int j=0;j<n;j++)
    {
        cout<<a[j]<<endl;
    }

    return 0;
}