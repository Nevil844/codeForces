#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    long long ans=0;
    for(int i=n; i>0; i--){
        ans+=pow(2,i);
    }
    cout<<ans;
}