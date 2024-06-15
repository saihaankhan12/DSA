#include<iostream>
using namespace std;
int main()
{
	int n,m ,i,j,flag=0;
	char txt[100],pat[100];
	cout<<"Enter the number of element in the array text:"<<endl;
	cin>>n;
	cout<<"Enter the element in the array text:";
	for(int i=0;i<n;i++)
	{
		cin>>txt[i];
	}
	cout<<"Enter the number of element in the array pattern:"<<endl;
	cin>>m;
	cout<<"Enter the element in the array pattern:";
	for(int j=0;j<m;j++)
	{
		cin>>pat[j];
	}
	for (i=0;i<n-m;i++)
	{
		for (j=0;j<m;j++)
		{
			if (txt[i+j]!=pat[j])
			{
				break;
			}
		
		}
	
	if(j==m)
	{
		cout<<"Pattern found at location :"<<i<<endl;
		flag=1;
	}
	}
	if(flag==0)
	{
		cout<<"Pattern Not Found"<<endl;
	}
	return 0;
}
