#include<iostream>
using namespace std;

int main()
{
    for(int i=0;i<=5;i++)
    {
        cout<<"Saihaan"<<endl;
        cout<<"Saad"<<endl;
        continue;   // On continue, the compiler won't execute any statements further and move on to next iteration. Therefore,Saabiq won't be printed.
        cout<<"Saabiq"<<endl;
    }
    return 0;
}