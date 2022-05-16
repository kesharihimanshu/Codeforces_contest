#include<bits/stdc++.h>
using namespace std;
#define int long long
    int v[201][201];
    
  
signed main(){
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
    
    vector<int>a(n);
       vector<int>b(n);

    for(int i=0;i<n;i++){
        cin>>a[i];
     
    }
    sort(a.rbegin(),a.rend());

    b[0]=a[0];
    for(int i=1;i<n;i++){
        b[i]=b[i-1]+a[i];
    }
    for(int i=0;i<m;i++){
        int u;
        cin>>u;
        int ans=lower_bound(b.begin(),b.end(),u)-b.begin();
        ans++;
        if(ans>n)
        ans=-1;
        cout<<ans<<endl;
    }
        
    }
}