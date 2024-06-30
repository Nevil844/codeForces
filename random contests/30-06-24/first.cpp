#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        int ans=0;
        while(n>1){
            ans+=k;
            n--;
        }
        cout<<ans+1<<endl;
    }
}