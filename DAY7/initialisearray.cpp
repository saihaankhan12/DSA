#include<iostream>
using namespace std;

int main()
{
    int  a[20];
    
    fill_n(a,20,2);  // function to fill the entire array with same no.


    for(int i=0;i<20;i++)
    {
        cout<<a[i]<<endl;
    }

    return 0;
}

