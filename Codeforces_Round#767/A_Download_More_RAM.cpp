#include<bits/stdc++.h>
using namespace std;
#define int long long 
signed main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        int a[n],b[n];
        vector<vector<int>>v;
        for(int i=0;i<n;i++)
        cin>>a[i];
        for(int i=0;i<n;i++)
        cin>>b[i];
        for(int i=0;i<n;i++)
        {
            v.push_back({a[i],b[i]});
        }
        sort(v.begin(),v.end());
        for(int i=0;i<n;i++)
        {
            if(v[i][0]<=k)
            k+=v[i][1];
            else
            break;
        }
        cout<<k<<"\n";

    }
}