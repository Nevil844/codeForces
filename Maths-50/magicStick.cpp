#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        long long x,y,z;
        cin>>x>>y;
        if(x>3) cout<<"YES\n";
        else if(x==1){
            if(y==1) cout<<"YES\n";
            else cout<<"NO\n";
        }else{
            if(y<=3) cout<<"YES\n";
            else cout<<"NO\n";
        } 
    }
}