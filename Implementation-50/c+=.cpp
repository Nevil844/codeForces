#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
    int t,count;
    bool x;
    cin>>t;
    long long a,b,n;
    while(t--){
        x=1;
        cin>>a>>b>>n;
        count=0;
        if(a<b){
            a=a+b;
            count++;
        }
        while(a<=n && b<=n){
            if(x){
                b=b+a;
                x=0;
                count++;
            }else{
                a=a+b;
                x=1;
                count++;
            }
        }
        cout<<count<<endl;
    }
}