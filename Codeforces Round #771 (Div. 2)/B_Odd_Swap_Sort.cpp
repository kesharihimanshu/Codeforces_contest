#include<bits/stdc++.h>
using namespace std;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
#define int long long
signed main(){
    fast_io;
    int t;
    cin>>t;
    while(t--)
    {
       int n;
       cin>>n;
       int a[n],b[n];
       vector<int>v,m;
       for(int i=0;i<n;i++)
       {
           cin>>a[i];
          if(a[i]%2)
          v.push_back(a[i]);
          else
          m.push_back(a[i]);
       }
       bool fl=false;
       for(int i=1;i<m.size();i++)
       {
           if(m[i-1]>m[i])
           {
               fl=true;
               break;
           }
         
       }
         for(int i=1;i<v.size();i++)
       {
           if(v[i-1]>v[i])
           {
               fl=true;
               break;
           }
         
       }


      
       if(fl)
       {
           cout<<"NO"<<endl;
       }
       else
       cout<<"YES"<<endl;


    }
}