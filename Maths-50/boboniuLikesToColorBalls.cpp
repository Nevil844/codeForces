#include <bits/stdc++.h>
using namespace std;

bool check(long long r,long long g,long long b,long long w){
    if(r%2==0  && g%2==0 && b%2==0) return 1;
    else if(r%2==0 && b%2==0 && w%2==0) return 1;
    else if(r%2==0 && g%2==0 && w%2==0) return 1;
    else if(b%2==0 && g%2==0 && w%2==0) return 1;
    return 0;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        long long r,g,b,w;
        cin>>r>>g>>b>>w;
        if(check(r,g,b,w)) cout<<"Yes\n";
        else if(r>0 && g>0 && b>0 && check(r-1,g-1,b-1,w+1))  cout<<"Yes\n";
        else cout<<"No\n";
    }
}