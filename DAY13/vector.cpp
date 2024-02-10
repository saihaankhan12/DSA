#include<iostream>
#include<vector>

using namespace std;

int main()
{
     vector<int> v;
     cout<<"with no elements Capacity : "<< v.capacity()<<endl;

     v.push_back(1);
     cout<<"Capacity : "<< v.capacity()<<endl;

     v.push_back(2);
     cout<<"Capacity : "<< v.capacity()<<endl;  // the capacity of vector "doubles" when element is inserted in filled vector

     v.push_back(3);
     cout<<"Capacity : "<< v.capacity()<<endl;

     v.push_back(4);
     cout<<"Capacity : "<< v.capacity()<<endl;

     v.push_back(5);
     cout<<"Capacity : "<< v.capacity()<<endl;


     cout<<"Size : " <<v.size()<<endl; // no. of elements in vector

    cout<<"Element at 2nd index: "<< v.at(2)<<endl;

    cout<<"First element : "<<v.front()<<endl;
    cout<<"Last element : "<<v.back()<<endl;
    
    vector<int> a(5,1); // size is 5. All 5 elements are initialised to 1
    vector<int> last(a);  //  last vector copies a 
    
    cout<<"After copying a : "<<endl;
    for(int i=0;i<last.size();i++)
    {
        cout<<last[i]<<endl;
    }

    cout<<"Before pop : "<<endl;
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<endl;
    }

    v.pop_back();  // removes topmost element 
    cout<<"After pop : "<<endl;
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<endl;
    }

    cout<<"Before Clear, size : "<<v.size()<<endl;

    v.clear();
    cout<<"after Clear, size : "<<v.size()<<endl;

    return 0;
}