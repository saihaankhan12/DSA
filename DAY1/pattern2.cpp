#include<iostream>
using namespace std;

int main()
{
  int x;
  cout<<"Enter a no."<<endl;
  cin>>x;

  for(int i=0;i<x;i++)
    {
      for(int j=0;j<x;j++)
        {
          printf("%d",j+1);
        }
      cout<<endl;
    }
  return 0;
}

