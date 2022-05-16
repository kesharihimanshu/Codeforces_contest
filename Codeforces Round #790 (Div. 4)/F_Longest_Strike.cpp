#include<bits/stdc++.h>
using namespace std;
#define int long long
    int v[201][201];
    
  
signed main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
    
    vector<int>a(n);
     
  map<int,int>m;
  int l=0,r=-1;
    for(int i=0;i<n;i++){
        cin>>a[i];

     m[a[i]]++;
     m[a[i]-1]+=0;
    }
    int temp=-1;
for(auto it:m){
    int x=it.first;
    int y=it.second;
    if(y<k){
        temp=-1;
        continue;
    }
    if(temp==-1)
    {
        temp=x;
    }
    if(x-temp>r-l)
    {
        l=temp;
        r=x;
    }
}
 
  
   if(r==-1){
       cout<<-1<<endl;
       continue;
   }
   cout<<l<<" "<<r<<endl;
        
    }
}