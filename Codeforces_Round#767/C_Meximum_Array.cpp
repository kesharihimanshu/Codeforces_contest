#include<bits/stdc++.h>
using namespace std;
#define int long long 
signed main(){
    #ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
int n;
cin>>n;
int a[n];
map<int,int>m;
for(int i=0;i<n;i++)
{
    cin>>a[i];
    m[a[i]]++;
}
vector<int>ans;
set<int>st;
int x=0;
for(int i=0;i<n;i++)
{
m[a[i]]--;

st.insert(a[i]);
while(st.find(x)!=st.end())
{
    x++;
}
if(m[x]==0)
{
    ans.push_back(x);
st.clear();
x=0;
}

}
cout<<ans.size()<<"\n";
for(auto r:ans)
{
    cout<<r<<" ";
}
cout<<"\n";



    }
}    