#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, ans=0;
    cin>>n;
    int i=0;
    while(n>0){
        ans+=n;
        ans+=((n-1)*i);
        n--;
        i++;
    }
    cout<<ans;
}