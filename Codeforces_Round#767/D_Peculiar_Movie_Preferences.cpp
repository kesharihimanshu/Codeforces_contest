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
map<string,int>m;
vector<string>a(n);
for(int i=0;i<n;i++)
{
    cin>>a[i];

}
for(int i=0;i<n;i++)
{
    string s=a[i];
    m[s]++;
    reverse(s.begin(),s.end());
    if(m[s]>0)
    {
        cout<<"YES\n";
        goto fl;
    }
}
m.clear();

for(int i=0;i<n;i++)
{
    string s=a[i];
    m[a[i]]++;
    string y=s.substr(1,2);
    reverse(y.begin(),y.end());
    if(m[y]>0)
    {
       cout<<"YES\n";
        goto fl; 
    } 
}
m.clear();
for(int i=n-1;i>=0;i--)
{
   string s=a[i];
    m[a[i]]++;
    string y=s.substr(0,2);  
     reverse(y.begin(),y.end());
    if(m[y]>0)
    {
       cout<<"YES\n";
        goto fl; 
    }
}
cout<<"NO\n";


fl: ;



    }
}  