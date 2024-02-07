#include <bits/stdc++.h>
using namespace std;
 
int main(){
    long long t;
    cin>>t;
    while(t--){
        long long x,n;
        cin>>x>>n;
        long long ans = 0;
        if(n==1) cout<<x<<endl;
        else{
        for(long long i=1;i<=x;i++){
            if(x%i == 0){
                long long k = (x-i)/(n-1);
                if(k > 0 && __gcd(i,k) == i){
                    if(i > ans){
                        ans = i;
                    }
                    else break;
                }
            }
        }
        cout<<ans<<endl;
        }
    }
}