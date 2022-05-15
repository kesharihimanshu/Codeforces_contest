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
       unordered_map<int,int>m,k;
       int l=-1;
       for(int i=0;i<n;i++)
       {
           cin>>a[i];
         if(i%2==0){
             m[a[i]%2]++;
         }
         else
         k[a[i]%2]++;
       }
       if(m.size()==1 && k.size()==1)
       cout<<"YES"<<endl;
       else
       cout<<"NO"<<endl;
       
        
    }
}