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
   vector<int>v;
   for(int i=n;i>0;i--){
   v.push_back(i);
   cout<<i<<" ";}
   cout<<endl;
   for(int i=n-1;i>=1;i--)
   {
       swap(v[i],v[i-1]);
       for(int j=0;j<n;j++)
       cout<<v[j]<<" ";
       cout<<endl;
   }




    }
}