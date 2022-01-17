#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define endl "\n"
signed main()
{
    int t;
    cin>>t;
    while(t--)
    {
       string s;
        cin>>s;
        int w,w1;
        bool fl=false;
        for(int i=s.size()-1;i>0;i--)
        {
             w=s[i-1]-'0';
             w+=s[i]-'0';
             if(w>9)
             {
                cout<<s.substr(0,i-1)<<w<<s.substr(i+1)<<endl;
                fl=true;
                break;
             }
        }
        
       if(fl)
       continue;
       w=s[0]-'0';
       w+=s[1]-'0';
       cout<<w<<s.substr(2)<<endl;

  


    }}