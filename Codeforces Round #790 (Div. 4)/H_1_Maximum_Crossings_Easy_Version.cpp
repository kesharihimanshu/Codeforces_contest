#include<bits/stdc++.h>
using namespace std;
#define int long long
    int v[201][201];
    
  
signed main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n;
        int ans=0;
    
    vector<int>a(n);
     for(int i=0;i<n;i++)
     cin>>a[i];
     for(int i=0;i<n;i++)
     {
         for(int j=i+1;j<n;j++){
             if(a[i]>=a[j])ans++;
         }
     }
  cout<<ans<<endl;
        
    }
}