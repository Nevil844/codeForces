#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin>>t;
    while(t--){
        long long k,x,a;
        cin>>k>>x>>a;
        int kt=k*(k+1);
        // if(a<=x) cout<<"NO\n";
        // else{
        //     if(k<=x) cout<<"NO\n";
        //     else cout<<"YES\n";
        // }
        if(a<kt) cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }
}