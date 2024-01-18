#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,a;
    vector<int> arr;
    bool hard=0;
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>a;
        arr.push_back(a);
    }
    for(int i=0; i<n; i++){
        if(arr[i]==1){
            hard=1;
        }
    }
    if(hard){
        cout<<"HARD";
    }else{
        cout<<"EASY";
    }
}