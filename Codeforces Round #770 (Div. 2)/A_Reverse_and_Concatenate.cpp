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
        int n,k;
        cin>>n>>k;
        string s;
        cin>>s;
        if(k==0)
        {
            cout<<1<<endl;
            continue;
        }
        string a=s;
        reverse(a.begin(),a.end());
        if(a==s)
         {
            cout<<1<<endl;
            continue;
        }
     else{
         cout<<2<<endl;
     }

    }
}