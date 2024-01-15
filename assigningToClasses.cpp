#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,a, ans=0;
        vector <int> arr;
        cin>>n;
        for(int i=0; i<2*n; i++){
            cin>>a;
            arr.push_back(a);
        }
        sort(arr.begin(), arr.end());
        cout<<arr[n]-arr[n-1]<<endl;
    }
}