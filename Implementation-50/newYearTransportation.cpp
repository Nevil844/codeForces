#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,t;
    cin>>n>>t;
    int travel=1;
    int arr[n-1];
    for(int i=0; i<n-1; i++){
        cin>>arr[i];
    }
    while(travel<t){
        travel+=arr[travel-1];
    }
    if(travel==t){
        cout<<"YES";
    }else{
        cout<<"NO";
    }
}