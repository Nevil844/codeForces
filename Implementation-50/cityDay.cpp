#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

int main(){
    long long n;
    int x,y,ans=-1;
    int arr[n];
    cin>>n>>x>>y;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    // int days=x+y;
    for(int i=0; i<n; i++){
        bool flag=0;
        for(int j=i-x; j<i+y; j++){
            if(j>=0 && j<n && j!=i){
                if(arr[i]>arr[j]){
                    flag=1;
                    break;
                }
            }
        }
        if(flag){
            continue;
        }
        else{
            ans=i+1;
            break;
        }
    }
    cout<<ans;
}