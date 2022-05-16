#include<bits/stdc++.h>
using namespace std;
#define int long long
    int v[201][201];
    
    int solve(int i,int j,int n,int m){
        int ans=0;
        int x=i,y=j;
        while(x>=0 && y>=0){
            ans+=v[x][y];
            x--;y--;
        }
         x=i,y=j;
        while(x>=0 && y<m){
            ans+=v[x][y];
            x--;y++;
        }
         x=i,y=j;
        while(x<n&& y>=0){
            ans+=v[x][y];
            x++;y--;
        }
         x=i,y=j;
        while(x<n && y<m){
            ans+=v[x][y];
            x++;y++;
        }
        ans-=v[i][j]*3;
        return ans;

    }
signed main(){
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
    
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cin>>v[i][j];
            }
        }
        int ans=0;
          for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                
                ans=max(ans,solve(i,j,n,m));
            }
        }
        cout<<ans<<endl;
    }
}