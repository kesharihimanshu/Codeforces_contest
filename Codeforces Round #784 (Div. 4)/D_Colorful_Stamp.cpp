#include<bits/stdc++.h>
using namespace std;
#define int long long
    int v[201][201];
    
  
signed main(){
    int t;
    cin>>t;
    while(t--){
        int n;
       cin>>n;
       string s;
       cin>>s;
       int b=0,r=0;
       bool fl=false;
       for(int i=0;i<n;i++)
       {
           if(s[i]=='W')
           {
               if((b==0 && r!=0)||(b!=0&& r==0)){
                   fl=true;
                   cout<<"NO"<<endl;
                   break;
               }
               else if(b+r==1){
                   fl=true;
                   cout<<"NO"<<endl;
                   break;
               }
               b=0;r=0;
           }
           else if(s[i]=='R')
           r++;
           else
           b++;
       }
 if(fl)continue;
        if((b==0 && r!=0)||(b!=0&& r==0)){
                   fl=true;
                   cout<<"NO"<<endl;
               }
               else if(b+r==1){
                   fl=true;
                   cout<<"NO"<<endl;
               }
               if(fl)continue;
               cout<<"YES"<<endl;

       
        
    }
}