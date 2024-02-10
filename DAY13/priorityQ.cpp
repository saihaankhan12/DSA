#include<iostream>
#include<queue>

using namespace std;
int main()
{
    //max heap
    priority_queue<int> maxi;

    //min heap
    priority_queue<int,vector<int>, greater<int> > mini;
    
    maxi.push(4);
    maxi.push(2);
    maxi.push(7);
    maxi.push(3);
    
    cout<<"max. element : "<< maxi.top()<<endl;
    int n = maxi.size(); // done bc size changes when we pop in loop

    for(int i=0;i<n;i++)
    {
        cout<<maxi.top()<<endl;
        maxi.pop();
    }


    mini.push(4);
    mini.push(1);
    mini.push(9);
    mini.push(6);
    mini.push(2);
    mini.push(7);

    cout<<"min. element : "<< mini.top()<<endl;
     int m = mini.size();

    for(int i=0;i<m;i++)
    {
        cout<<mini.top()<<endl;
        mini.pop();
    }

    return 0;
}