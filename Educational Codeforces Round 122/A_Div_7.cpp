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
if(n%7==0)
{
    cout<<n<<endl;
    continue;
}
string s=to_string (n);
for(int i=0;i<s.size();i++)
{
     char h=s[i];
     bool fl=false;
    if(i==0)
    {
       
        for(int j=1;j<=9;j++)
        {
            s[i]='0'+j;
            int u=stoi(s);
            if(u%7==0)
            {
              cout<<u<<endl;
   fl=true;
   break;
            }
        }
       
       
    }else{
         for(int j=0;j<=9;j++)
        {
            s[i]='0'+j;
            int u=stoi(s);
            if(u%7==0)
            {
              cout<<u<<endl;
   fl=true;
   break;
            }
        }

    }
     if(fl)
        break;
        s[i]=h;
}


        }}