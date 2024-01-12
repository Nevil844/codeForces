#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
    int k;
    long long n;
    cin>>n>>k;
    while(k--){
        if(n%10==0){
            n/=10;
        }else{
            n-=1;
        }
    }
    cout<<n;
}