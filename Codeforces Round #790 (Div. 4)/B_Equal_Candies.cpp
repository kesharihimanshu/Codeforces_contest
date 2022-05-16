#include<bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
        cin>>a[i];
        int ans=0;
        int u=*min_element(a,a+n);
        // cout<<u<<" ";
       for(int i=0;i<n;i++)
       ans+=a[i]-u;
       cout<<ans<<endl;
        
    }
}