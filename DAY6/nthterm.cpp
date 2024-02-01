#include<iostream>
using namespace std;

void AP(int x)
{
    int a = 3*x + 7;
    cout<<"The AP of "<<x<<" term is : "<<a<<endl;
}


int main()
{
    int n;
    cout<<"Enter the term: "<<endl;
    cin>>n;
    AP(n);

    return 0;
}