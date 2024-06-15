#include<iostream>
#include<string>
#include<vector>
using namespace std;
int solve(string& a, string& b, int i, int j , vector<vector<int>> &dp)
{
    if(i==a.size() || j==b.size())
    {
        return 0;
    }
    if(dp[i][j]!=-1)
    {
        return dp[i][j];
    }

    int ans=0;
    if(a[i]==b[j])
    {
        ans= 1 + solve(a,b,i+1,j+1, dp);
    }
    else
    {
        ans = max(solve(a,b,i+1,j, dp),solve(a,b,i,j+1, dp));
    }
    return dp[i][j] = ans;
}
int longest(string text1,string text2)
{
    vector<vector<int>> dp(text1.length(),vector <int> (text2.length(),-1));
    return solve(text1,text2,0,0,dp);

}

int main()
{ 
    string text1,text2;
    cout<<"Enter text1"<<endl;
    cin>>text1;

    cout<<"Enter text2"<<endl;
    cin>>text2;


   int res = longest(text1,text2);

    cout<<"The length of longest common subsequence is: ";
    cout<<res;

    return 0;
}