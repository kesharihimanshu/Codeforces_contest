#include<bits/stdc++.h>
using namespace std;

#define int long long
signed main(){
    int t;
    cin>>t;
    vector<int>step(1001,INT_MAX);

    step[1]=0;
    for(int i=1;i<=1000;i++)
    {
        
        for(int j=i;j>=1;j--)
        {
            int u=i+(i/j);
            if(u>1000)
            break;
            step[u]=min(step[u],1+step[i]);
        }
    }

    while(t--)
    {
      int n,k;
      cin>>n>>k;
      int a[n],c[n];
      for(int i=0;i<n;i++)
      cin>>a[i];
      for(int i=0;i<n;i++)
      cin>>c[i];
      int sum=0;
      for(int i=0;i<n;i++)
      {
          sum+=step[a[i]];
          a[i]=step[a[i]];
      }
     
      if(sum<=k)
      {
          int u=0;
          for(int i=0;i<n;i++)
          u+=c[i];
          cout<<u<<endl;
          continue;
      }
     

      vector<vector<int>>dp(n+1,vector<int>(k+1,0));
      for(int i=1;i<=n;i++)
      {
          for(int j=0;j<=k;j++)
          {
              if(j>=a[i-1])
                  dp[i][j]=max(dp[i-1][j-a[i-1]]+c[i-1],dp[i-1][j]);
                  else
              dp[i][j]=max(dp[i][j],dp[i-1][j]);
          
      }}
      cout<<dp[n][k]<<endl;





    }
}