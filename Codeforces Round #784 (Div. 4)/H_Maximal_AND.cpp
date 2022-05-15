#include<bits/stdc++.h>
using namespace std;
 #define int long long
signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t;
    cin >> t;
    while(t--) {
		int n, m;
		cin >> n >> m;
		int a[n];
	
		int cnt[31];
        memset(cnt,0,sizeof(cnt));
        	for(int i = 0; i < n; i++){
              cin >> a[i];
              for(int j=30;j>=0;j--){
                  if(a[i]&(1<<j))cnt[j]++;
              }
            }
            int ans=0;
            for(int i=30;i>=0;i--){
               int need=n-cnt[i];
               if(need<=m){
                   ans+=(1<<i);
                   m-=need;
               }
            } 
            cout<<ans<<endl;
	}
}