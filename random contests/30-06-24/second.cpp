#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        long long arr[n];
        for(int i=0; i<n; i++){
            cin>>arr[i];
        }
        long long num=arr[0];
        vector<long long> store;

        for(int i=1; i<n; i++){
            if(num>arr[i]){
                store.push_back(num-arr[i]);
            }else num=arr[i];
        }
        sort(store.begin(), store.end());
        int size=store.size();
        int coins=size+1;
        long long ans=0, already=0;
        for(int i=0; i<size; i++){
            long long sup=store[i]-already;
            ans+=coins*(sup);
            already+=sup;
            coins--;
        }
        cout<<ans<<endl;
    }
}