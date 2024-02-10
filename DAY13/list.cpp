#include<iostream>
#include<list>

using namespace std;

int main()
{
    list<int> l;

    list<int> a(5,100);
    cout<<"Printing a : "<<endl;
    for(int i:a)
    {
      cout<<i<<endl;
    }

    l.push_back(1);
    l.push_front(3);

    cout<<"Elements : "<<endl;
    for(int i:l)
    {
      cout<<i<<endl;
    }

    l.erase(l.begin());
    cout<<"After erase, elements : "<<endl;

    for(int i:l)
    {
        cout<<i<<endl;
    }

    return 0;
}