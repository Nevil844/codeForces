#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin>>t;
    while(t--){
        long long k,x,a, sum=0;
        cin>>k>>x>>a;
        k--;
        bool ans=1;
        for(int i=0; i<=x; i++){
            int bet=(sum+k)/k;
            sum+=bet;
            if(a<sum){
                ans=0;
                break;
            }
        }
        if(!ans) cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }
}