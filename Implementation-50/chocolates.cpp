#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

int main(){
    long long n, count=0;
    cin>>n;
    long long arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    long long num=1e18, zero=0;
    for(int i=n-1; i>=0; i--){
        num=min(num-1,arr[i]);
        num=max(zero, num);
        count+=num;
    }
    cout<<count;
}