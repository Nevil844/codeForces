#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,count=1;
    cin>>n;
    vector<int> counts;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    for(int i=0; i<n-1; i++){
        if(arr[i]<arr[i+1]){
            count++;
        }else{
            counts.push_back(count);
            count=1;
        }
    }
    counts.push_back(count);
    auto ans=max_element(counts.begin(),counts.end());

    cout<<*ans;
}