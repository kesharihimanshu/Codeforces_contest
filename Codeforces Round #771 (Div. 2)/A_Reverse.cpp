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
        int n;
        cin>>n;
        int a[n];
        unordered_map<int,int>m;
        for(int i=0;i<n;i++){
        cin>>a[i];
        m[a[i]]=i;
        }
       
        for(int i=0;i<n;i++)
        {
            if(a[i]!=i+1)
            {
               reverse(a+i,a+m[i+1]+1);
                break;
            }
        }
        for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
        cout<<endl;


       

    }
}