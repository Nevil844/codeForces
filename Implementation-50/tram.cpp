#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,a,b, ans=0;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>a>>b;
        ans=ans-a+b;
        arr[i]=ans;
    }
    int maxi=arr[0];
    for(int i=1; i<n; i++){
        if(maxi<arr[i]){
            maxi=arr[i];
        }
    }
    cout<<maxi;
}