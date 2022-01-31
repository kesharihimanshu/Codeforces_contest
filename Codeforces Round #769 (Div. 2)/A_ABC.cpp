#include<bits/stdc++.h>
using namespace std;

#define int long long
signed main(){
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string a;
        cin>>a;
        if(n==1)
        {
            cout<<"YES"<<endl;
            continue;
        }
        if(n==2)
        {
            if(a[0]=='1'&& a[1]=='0')
            {
              cout<<"YES"<<endl;
            continue;  
            }
            else if(a[0]=='0'&& a[1]=='1')
            {
                 cout<<"YES"<<endl;
            continue; 
            }
            else
            cout<<"NO"<<endl;
            continue;
        }
        cout<<"NO"<<endl;


    }
}