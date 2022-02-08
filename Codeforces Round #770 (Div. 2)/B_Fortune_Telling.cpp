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

        int n,d,x;
        cin>>n>>d>>x;
        int sum=0;
        for(int i=0;i<n;i++)
        {
            int c;
            cin>>c;
            sum+=c;
        }
        sum+=d;
        if(sum%2==x%2)
        {
            cout<<"Alice"<<endl;
        }
        else
        cout<<"Bob"<<endl;



    }
}