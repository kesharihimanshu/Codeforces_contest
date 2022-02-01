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
        if(n==1)
        {
            cout<<0<<endl;
            continue;
        }
        if(n==2)
        {
            cout<<0<<" "<<1<<endl;
            continue;
        }
       int i=0,j=n-1;
       while(i<j)
       {
           if((j & (j-1))==0)
           {
               cout<<j<<" ";
               cout<<i<<" ";
               i++;j--;
           }
           else{
               cout<<j<<" ";
               j--;
           }
       }
       if(i==j)
       {
           cout<<i<<" ";
       }
       cout<<endl;



    }}