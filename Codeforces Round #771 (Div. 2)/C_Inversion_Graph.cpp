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
       int n,ans=0;
       cin>>n;
       int a[n],mx=0;
       for(int i=0;i<n;i++)
       {
           cin>>a[i];
           mx=max(mx,a[i]);
           if(mx==i+1)
           ans++;
       }
      
      cout<<ans<<endl;
     
       

    }
}