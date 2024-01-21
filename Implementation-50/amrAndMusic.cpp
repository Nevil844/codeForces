#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,k;
    cin>>n>>k;
    vector<int> arr, ans;
    int num;
    for(int i=0; i<n; i++){
        cin>>num;
        arr.push_back(num);
    }
    while(k-*min_element(arr.begin(),arr.end())>=0){
        k-=*min_element(arr.begin(),arr.end());
        for(int i=0; i<n; i++){
            if(arr[i]==*min_element(arr.begin(),arr.end())){
                ans.push_back(i+1);
                arr[i]=INT16_MAX;
                break;
            }
        }
    }
    cout<<ans.size()<<endl;
    for(int i=0; i<ans.size(); i++){
        cout<<ans[i]<<" ";
    }
}