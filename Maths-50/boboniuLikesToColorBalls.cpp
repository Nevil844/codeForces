#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        long long r,g,b,w;
        cin>>r>>g>>b>>w;
        bool count=0, ans=0;
        while(r>=0 && g>=0 && b>=0){
            if(r%2==0  && g%2==0 && b%2==0) count=1;
            else if(r%2==0 && b%2==0 && w%2==0) count=1;
            else if(r%2==0 && g%2==0 && w%2==0) count=1;
            else if(b%2==0 && g%2==0 && w%2==0) count=1;

            if(count){
                cout<<"Yes\n";
                ans=1;
                break;
            }else{
                r--;
                g--;
                b--;
                w+=3;
            }
        }
        if(!ans){
            cout<<"No\n";
        }
    }
}