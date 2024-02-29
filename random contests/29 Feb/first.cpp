#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        long long n, ans=0;
        cin>>n;
        while(pow(2,ans)<=n){
            ans++;
        }
        long long  x = pow(2,ans-1);
        cout<<x<<endl;
    }
}