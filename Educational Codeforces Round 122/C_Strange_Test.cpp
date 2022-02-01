#include<bits/stdc++.h>
using namespace std;

#define int long long
signed main(){
    int t;
    cin>>t;
    while(t--)
    {
        int a,b;
        cin>>a>>b;
        int ans=INT_MAX;
        // cout<<1;
        for(int i=a;i<=b;i++)
        {
            int bb=0;
            for(int j=20;j>=0;j--)
            {
                if(b & (1<<j))
                {
                 bb+=(1<<j);
                }
                else if(i & (1<<j))
                {
                    bb+=(1<<j);
                    break;
                }
            }
            ans=min(ans,i+(i|bb));
        }
        ans+=(1-a-b);
        cout<<min(ans,b-a)<<endl;
        
    }
}