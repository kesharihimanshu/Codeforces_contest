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
      vector<string>v(n);
     unordered_map<string,int>m;
      for(int i=0;i<n;i++){
      cin>>v[i];
      m[v[i]]++;}
      int ans=0;
      for(int i=0;i<n;i++){
          string u=v[i];
          string w=v[i];
          for(char j='a';j<='k';j++){
               u[0]=j;
               w[1]=j;
               if(u!=v[i])
               ans+=m[u];
               if(w!=v[i])
               ans+=m[w];

          }

      }
      cout<<ans/2<<endl;

        
    }
}