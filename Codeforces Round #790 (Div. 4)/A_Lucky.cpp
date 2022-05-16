#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string a;
        cin>>a;
        int u=a[0]-'0'+a[1]-'0'+a[2]-'0';
        int v=a[3]-'0'+a[4]-'0'+a[5]-'0';
        if(u==v)
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
    }
}