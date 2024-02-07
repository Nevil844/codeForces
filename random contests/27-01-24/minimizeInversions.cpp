#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n], b[n];
        for(int i=0; i<n; i++){
            cin>>a[i];
        }
        for(int i=0; i<n; i++){
            cin>>b[i];
        }
        vector<pair<int,int>> paired;
        for(int i=0; i<n; i++){
            paired.push_back({a[i],b[i]});
        }
        sort(paired.begin(),paired.end());
        for(int i=0; i<n; i++){
            cout<<paired[i].first<<" ";
        }
        cout<<endl;
        for(int i=0; i<n; i++){
            cout<<paired[i].second<<" ";
        }
        cout<<endl;
    }
}