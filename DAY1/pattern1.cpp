#include<iostream>
using namespace std;

int main()
{
  int x;
cout<<"Enter no."<<endl;
  cin>>x;

  for(int i=1;i<x;i++)   //rows
    {
      for(int j=0;j<x;j++)  //columns
        {
        cout<<i;
        }
      cout<<endl;
    }
  return 0;
}
