#include<iostream>
using namespace std;

// two pointer approach 
// eg. output: 000011111

void sortone(int a[],int n)
{
    int left = 0,right = n-1;

    while(left < right)
    {
        while(a[left] == 0 && left<right)  // edge case 
        {
            left++;
        }
        while(a[right]== 1 && left<right)
        {
            right --;
        }

        // it comes here when left is 1 and right is 0
        if(left < right)
        {
            swap(a[left],a[right]);
            left++;
            right--;
        }
    }
}

int main()
{
    int a[20],n;
    cout<<"Enter no. of elements: "<<endl;
    cin>>n;

    cout<<"Enter the elements: "<<endl;

    for(int i=0;i<n;i++)
    {
       cin>>a[i];
    }

    sortone(a,n);

    for(int i=0;i<n;i++)
    {
        cout<<a[i];
    }

    return 0;
}