#include<bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
        cin>>a[i];
        if(n==1)
        {
            cout<<0<<endl;
            continue;
        }
       vector<int>v;
       for(int i=0;i<n-1;i++)
       {
           if(a[i]!=a[n-1])
           {
               v.push_back(i);
           }
       }
       int ans=0;
       while(v.size()>0)
       {
           int u=v.back();
           int y=min(n-1-u,u+1);
           int r=u-y+1;
           ans++;
           while(v.size()>0 && v.back()>=r)
           {
               v.pop_back();
           }
       }
        cout<<ans<<endl;
        

        
    }
}