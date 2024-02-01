#include<iostream>
using namespace std;

int sum(int a[],int n)
{
    int sum=0;
    for(int i=0;i<n;i++)
    {
       sum = sum + a[i];
    }
    return sum;

}


int main()
{
    int n,a[40],x;
    cout<<"Enter the no. of elements: "<<endl;
    cin>>n;

    cout<<"Enter the elements: "<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    x=sum(a,n);

    cout<<"The sum of elements of array: "<<x<<endl;

    return 0;
}