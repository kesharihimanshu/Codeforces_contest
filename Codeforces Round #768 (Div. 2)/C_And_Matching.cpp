#include<bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        if(n==4 && k==3)
        {
            cout<<-1<<endl;
            continue;
        }
        if(k==n-1)
        {
            cout<<0<<" "<<n-1<<endl;
            cout<<1<<" "<<n/2-1<<endl;
            int k=1;
            for(int i=2;i<=(n/2);i++)
            {
                if(i==(n/2-1))
                continue;
                if(i==(1<<k))
                {
                    k++;
                    cout<<i<<" "<<n-1-(i/2)<<endl;
                }
                else{
                    cout<<i<<" "<<n-1-i<<endl;
                }
            }
            continue;

        }
        
        for(int i=1;i<(n/2);i++)
        {
            if(i==k||n-1-i==k)
            continue;
            cout<<i<<" "<<n-1-i<<endl;
        }
        cout<<0<<" "<<n-1-k<<endl;
        if(k!=0)
        {
            cout<<n-1<<" "<<k<<endl;
        }




    }
}   