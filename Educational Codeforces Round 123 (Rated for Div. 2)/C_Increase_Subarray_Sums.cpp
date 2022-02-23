#include<bits/stdc++.h>
using namespace std;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
#define int long long
signed main(){
    fast_io;
    int t;
    cin>>t;
    while(t--)
    {
     int n,x;
     cin>>n>>x;
     vector<int>v(n);
     for(int i=0;i<n;i++)
     {
         cin>>v[i];
     }
     vector<int>ans(n+1,INT_MIN);
     ans[0]=0;
     for(int i=0;i<n;i++)
     {
         int temp=0;
         for(int j=i;j<n;j++)
         {
             temp+=v[j];
             ans[j-i+1]=max(ans[j-i+1],temp);

         }
     }
     for(int i=0;i<=n;i++)
     {
         int u=0;
         for(int j=0;j<=n;j++)
         {
            u=max(u,ans[j]+min(j,i)*x);
         }
         cout<<u<<" ";
     }
     cout<<endl;


    }
}