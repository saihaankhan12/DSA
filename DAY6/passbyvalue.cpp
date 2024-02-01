#include<iostream>
using namespace std;



void swap(int x,int y)
{
    int temp = x;
    x = y;
    y = temp;
}

int main()
{
    int a,b;
    cout<<"Enter the values:"<<endl;
    cin>>a>>b;
    
    cout<<"Before swap: "<<a<<b<<endl;

    swap(a,b);  

    cout<<"After swap: "<<a<<b;

return 0;

}