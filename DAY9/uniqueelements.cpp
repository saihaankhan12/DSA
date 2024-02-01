#include<iostream>
using namespace std;

int unique(int a[],int n)
{
   int ans =0;
   for(int i=0;i<n;i++)
   {
    ans = ans^a[i];  // xor entire array to find unique element
   }

   return ans;
}




int main()
{
    int a[20],n,x;
    cout<<"Enter the no. of elements: "<<endl;
    cin>>n;

    cout<<"Enter the elements: "<<endl;
    for(int i=0;i<n;i++)
    {
       cin>>a[i];
    }

   x = unique(a,n); 

   cout<<"The unique number is : "<<x<<endl;
    return 0;
}