#include<iostream>
using namespace std;

void merge(int a[],int n,int b[],int m,int c[])
{
    int i = 0,j = 0 ,k = 0;
    while(i<n && j<m) 
    {
        if(a[i] < b[j])
        {
            c[k] = a[i];
            i++;
            k++;
        }

        else
        {
            c[k] = b[j];
            j++;
            k++;
        }
    }

    while(i<n)  //  remaining elements in 1st array
    {
       c[k] = a[i];
       k++;
       i++;
    }

    while(j<m)  // remaining elements in 2nd array
    {
        c[k] = b[j];
        k++;
        j++;
    }
}




void print(int c[],int k)
{
    cout<<"The merged array : "<<endl;
    for(int i=0;i<k;i++)
    {
        cout<<c[i]<<" ";
    }
}


int main()
{
    int a[10],b[10],c[10],n,m,k;
    cout<<"Enter the size of a :"<<endl;
    cin>>n;
    
    cout<<"Enter the elements : "<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }

    cout<<"Enter the size of b :"<<endl;
    cin>>m;
    
    cout<<"Enter the elements : "<<endl;
    for(int i=0;i<m;i++)
    {
        cin>>b[i];
    }
    k = m + n;

    merge(a,n,b,m,c);

    print(c,k);

    return 0;
}