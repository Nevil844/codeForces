#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
    long long n;
    int digit, count=0;
    cin>>n;
    while(n>0){
        digit=n%10;
        if(digit==4 || digit==7){
            count++;
        }
        n/=10;
    }
    if(count==7 || count==4){
        cout<<"YES";
    }else{
        cout<<"NO";
    }
}