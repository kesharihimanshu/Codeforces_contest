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
        if(n<=1399)
        cout<<"Division 4\n";
        else if(n<=1599)
         cout<<"Division 3\n";
         else if(n<=1899)
          cout<<"Division 2\n";
          else 
           cout<<"Division 1\n";
       
        
    }
}