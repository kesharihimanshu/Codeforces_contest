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
        string s;
        cin>>s;
        bool fl=false;
        unordered_map<char,int>m;
        for(int i=0;i<6;i++)
        {
            if(s[i]=='B'||s[i]=='R'||s[i]=='G')
            {
                if(m[s[i]+32]==0)
                {
                    fl=true;
                    cout<<"NO"<<endl;
                    break;
                }
            }
            else
            m[s[i]]++;
        }
        if(fl==false)
        cout<<"YES"<<endl;





    }
}