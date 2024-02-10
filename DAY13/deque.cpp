#include<iostream>
#include<deque>

using namespace std;

int main()
{
    deque<int> d;
    d.push_back(7);
    d.push_front(1);

    for(int i:d)
    {
        cout<<i<<endl;
    }

    cout<<"First index : "<<d.at(1)<<endl;
    
    cout<<"Front : "<<d.front()<<endl;
    cout<<"Back : "<<d.back()<<endl;

    cout<<"Empty or not: "<<d.empty()<<endl;

    cout<<"Before erase,size : "<<d.size()<<endl;
    d.erase(d.begin(),d.begin()+1);  // deleted 1st element

    cout<<"After erase,size : "<<d.size()<<endl;

    cout<<"Elements : "<<endl;
    for(int i:d)
    {
        cout<<i<<endl;
    }

    return 0;
}