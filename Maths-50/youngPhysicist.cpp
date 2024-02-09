#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int x,y,z;
    int sx=0,sy=0,sz=0;

    while(n--){
        cin>>x>>y>>z;
        sx+=x;
        sy+=y;
        sz+=z;
    }
    if(sz || sx || sy) cout<<"NO";
    else cout<<"YES";
}