#include<bits/stdc++.h>
using namespace std;

#define int long long
signed main(){
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int n=s.size();
        if(n<=2)
        {
            cout<<0<<endl;
            continue;
        }
        int a=0,b=0;
        int mx=0;
        for(auto c:s)
        {
            if(c=='1')
            a++;
            else
            b++;
            if(a<b)
            {
                mx=max(mx,a);
            }
            else if(a>b)
            {
                mx=max(mx,b);
            }
        }
        cout<<mx<<endl;
        








    }}