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
if(k==1)
{
    cout<<"YES"<<endl;
    int b=1;
    for(int i=0;i<n;i++)
    {
        cout<<b++<<endl;
    }
    continue;

}
if((n*k)%2==1)
{
    cout<<"NO"<<endl;
    continue;
}
int u=(n*k)/2;
if(u%k!=0)
{
     cout<<"NO"<<endl;
    continue ;
}
cout<<"YES"<<endl;
int b=1;
for(int i=0;i<n/2;i++)
{
    for(int j=0;j<k;j++)
    {
     cout<<b<<" ";
     b+=2;

    }
    cout<<endl;
}
b=2;
for(int i=0;i<n/2;i++)
{
    for(int j=0;j<k;j++)
    {
     cout<<b<<" ";
     b+=2;

    }
    cout<<endl;
}




    }
}