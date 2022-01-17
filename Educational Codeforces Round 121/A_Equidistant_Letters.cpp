#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define endl "\n"
signed main()
{
    int t;
    cin>>t;
    while(t--)
    {
string s;
cin>>s;
map<char,int>m;
for(auto c:s)
m[c]++;
string ans="";
for(auto it:m)
{
    for(int i=0;i<it.second;i++)
    {
        ans.push_back(it.first);
    }
}
cout<<ans<<endl;

    }}