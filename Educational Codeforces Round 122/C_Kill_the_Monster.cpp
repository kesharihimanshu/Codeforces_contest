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
int c,d;
cin>>c>>d;
int k,w,h;
cin>>k>>w>>h;
int win=c/b;
if(c%b)
win++;
int loss=a/d;
if(a%d)
loss++;
if(win<=loss)
{
    cout<<"YES"<<endl;
    continue;
}
int ng=b+k*w;
win=c/ng;
if(c%ng)
win++;
if(win<=loss)
{
    cout<<"YES"<<endl;
    continue;
}
int nh=a+(k*h);
 win=c/b;
if(c%b)
win++;
loss=nh/d;
if(nh%d)
loss++;
if(win<=loss)
{
    cout<<"YES"<<endl;
    continue;
}
bool fl=0;
for(int i=0;i<=k;i++)
{
    int nh=a+(h*i);
    int ng=b+(k-i)*w;
win=c/ng;
if(c%ng)
win++;
loss=nh/d;
if(nh%d)
loss++;
if(win<=loss)
{
    cout<<"YES"<<endl;
    fl=true;
    break;
}

    
}
if(fl==false)
{
    cout<<"NO"<<endl;
}







    }}