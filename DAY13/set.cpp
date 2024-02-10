#include<iostream>
#include<set>

using namespace std;

// SET : 1) Stores unique elements. Suppose,we enter 5 same nos. it will store as one. 
//       2) Can't modify after inserting an element
//       3) Returns elements in sorted order


// Unordered set : 1) Faster
//                 2) Returns elements in random order


int main()
{
   set<int> s;

   s.insert(5);
   s.insert(5);
   s.insert(5);

   s.insert(9);
   s.insert(4);
   s.insert(0);

   for(auto i : s)
  {
    cout<<i<<endl;
  }

  cout<<endl;

  set<int>::iterator it = s.begin();  // it = 0
  it++;     // it = 1

  s.erase(it);   // it represents index 

  for(auto i : s)
  {
    cout<<i<<endl;
  }

  cout<<"-5 present or not : "<<s.count(-5)<<endl;

  set<int>::iterator itr = s.find(5);
  for(auto it = itr; it != s.end(); it++)  // starts printing from 5
  {
    cout<<*it<<endl;
  }


  return 0;
}