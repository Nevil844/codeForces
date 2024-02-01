#include <bits/stdc++.h>
using namespace std;

int main(){
    long long x,y,z;
    cin>>x>>y>>z;
    cout<<(x+y)/z<<" ";
    long long sasha=x%z, masha=y%z;
    if(sasha==masha && sasha==0 || (sasha+masha<z)) cout<<0;
    else if(sasha>masha) cout<<z-sasha;
    else cout<<z-masha;
}