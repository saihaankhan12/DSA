#include<iostream>
#include<map> 

using namespace std;

int main()
{ 
    map <int,string> m;   // map returns in sorted order
                          // T.C is O(logn)

                          // Unordered map is faster, T.C : O(1)

    m[1] = "Mohammed";  // 1 is the key, and Mohammed is the value
    m[13] = "Khan"; 
    m[2] = "Saihaan";
    
    m.insert( {5,"HII"});
   
   cout<<"Before erase : "<<endl;
   for(auto i : m)
   {
     cout<<i.first<<" "<< i.second<<endl;
   }

   cout<<"-13 present or not : "<<m.count(-13)<<endl;

   m.erase(13);
   cout<<"After erase : "<<endl;
   for(auto i : m)
   {
     cout<<i.first<<" "<<i.second<<endl;
   }

   auto it = m.find(2);
   for(auto i = it; i!=m.end(); i++)
   {
     cout<<(*i).first<<endl;
   }


   return 0;
}