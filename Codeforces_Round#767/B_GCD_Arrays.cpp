#include<bits/stdc++.h>
using namespace std;
#define int long long 
signed main(){
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,c;
        cin>>a>>b>>c;
        if(a==b && a==1)
        {
            cout<<"NO"<<"\n";
            continue;
        }
        if(a==b)
        {

            cout<<"YES"<<"\n";
            continue;
        }
        int k=b-a;

        if(a%2==1 && b%2==1)
        {
            k=k/2;
            k++;
        }
        else if(a%2==1 ||b%2==1)
        {
            k=(k+1)/2;
        }
        else {
            k=k/2;
        }
        if(k<=c)
        {
          cout<<"YES"<<"\n";  
        }
        else
        {
            cout<<"NO"<<"\n";
        }
    }
}