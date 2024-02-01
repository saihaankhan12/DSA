#include <iostream>
using namespace std;

int main()
{
  int x;
  cout<<"Enter a no."<<endl;
  cin>>x;

  for(int i=0;i<x;i++)
    {
      for(int j=x;j>0;j--)
        {
          printf("%d",j);
        }
      cout<<endl;
    }
  return 0;
}