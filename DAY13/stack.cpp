#include<iostream>
#include<stack>

using namespace std;

int main()
{
    stack<string> s;

    s.push("Mohammed");
    s.push("Saihaan");
    s.push("Khan");

    cout<<"Top element: "<<s.top() <<endl;

    s.pop();
    cout<<"Top element: "<<s.top() <<endl;

    cout<<"Size of stack : "<< s.size()<<endl;

    cout<<"Empty or not : "<<s.empty() <<endl;
    
    return 0;
}