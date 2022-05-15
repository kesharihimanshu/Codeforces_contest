#include<bits/stdc++.h>
using namespace std;
#define int long long
    int v[201][201];
    
  
signed main(){
    int t;
    cin>>t;
    while(t--){
        int n;
       cin>>n;
     int a[n];
     for(int i=0;i<n;i++)
     cin>>a[i];
     int ans=0,u=0,v=0;
     int i=0,j=n-1;
     while(i<=j){
        
         if( u<=v){
             u+=a[i++];
         }
         else{
             v+=a[j--];
         }
          if(u==v){
             ans=max(ans,i+n-1-j);
             u+=a[i];
             i++;
         }
     }
     if(u==v){
         ans=n;
     }
     cout<<ans<<endl;
    

        
    }
}