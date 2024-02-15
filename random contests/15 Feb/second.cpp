#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        long long n,k;
        cin>>n>>k;
        if(k==(4*n-2)) cout<<((k+1)/2)+1<<endl;
        else cout<<(k+1)/2<<endl;
    }
}