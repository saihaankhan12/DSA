#include<iostream>
#include<array>

using namespace std;
int main()
{
    int basic[3] = {1,2,3};

    array<int,4> a = {1,2,3,4};  //stl array

    int size = a.size();  //find size

    for(int i=0; i<size; i++)
    {
        cout<< a[i]<< endl;
    }

    cout<<"Element at 2nd index : "<< a.at(2) << endl;

    cout<<"Empty or not : "<< a.empty()<< endl; // 0 is false, 1 is true

    cout<<"First element : "<< a.front()<< endl;
    cout<<"Last element : "<< a.back() << endl;

    return 0;
} 