#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define endl "\n"
signed main()
{
    int t;
    cin>>t;
    while(t--)
    {
     int n;
     cin>>n;
     int k[n],h[n];
     for(int i=0;i<n;i++)
     cin>>k[i];
     for(int i=0;i<n;i++)
     cin>>h[i];
     int ans=0;
     int start=k[n-1]-h[n-1]+1;
      int end=k[n-1];
      for(int i=n-2;i>=0;i--)
      {
          if(start>k[i])
          {
              int u=end-start+1;
              ans+=(u*(u+1))/2;
              start=k[i]-h[i]+1;
              end=k[i];

          }
          else
          {
              start=min(start,k[i]-h[i]+1);
          }
      }
      int u=end-start+1;
              ans+=(u*(u+1))/2;
              cout<<ans<<endl;

    }}