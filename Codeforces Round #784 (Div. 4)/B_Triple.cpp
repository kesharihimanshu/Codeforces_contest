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
       unordered_map<int,int>m;
       int l=-1;
       for(int i=0;i<n;i++)
       {
           cin>>a[i];
           m[a[i]]++;
           if(m[a[i]]>=3)
           l=a[i];
       }
       cout<<l<<endl;
       
        
    }
}