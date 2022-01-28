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
        int a[n],b[n];
        int mx=0;
        for(int i=0;i<n;i++){
        cin>>a[i];
        mx=max(mx,a[i]);}
           for(int i=0;i<n;i++){
        cin>>b[i];
        mx=max(mx,b[i]);}
        int s=0;
        for(int i=0;i<n;i++)
        {
            int mn=min(a[i],b[i]);
            s=max(s,mn);
        }
        cout<<s*mx<<"\n";

        
    }
}