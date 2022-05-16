#include<bits/stdc++.h>
using namespace std;
#define int long long

    
  
signed main(){
    int t;
    cin>>t;
    while(t--){
        int n;
       cin>>n;
      
     vector<int>a(n+1);
     for(int i=2;i<=n;i++)
     cin>>a[i];
     int ans=0;
     vector<int>cnt(n+1,0);
     string s;
     cin>>s;
    
     for(int i=n;i>=1;i--){
         if(s[i-1]=='B')
         cnt[i]++;
         else cnt[i]--;
         if(cnt[i]==0)
         ans++;
         cnt[a[i]]+=cnt[i];
     }
     cout<<ans<<endl;
    	

        
    }
}