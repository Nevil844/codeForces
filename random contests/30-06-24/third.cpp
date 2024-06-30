#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        long long h[n];
        for(int i=0; i<n; i++){
            cin>>h[i];
        }
        long long maxi=LONG_LONG_MIN;
        long long mini=LONG_LONG_MAX;
        long long maxindex=0, minindex=0;
        for(int i=0; i<n; i++){
            if(h[i]>=maxi){
                maxi=h[i];
                maxindex=i;
            }
            if(h[i]<=mini){
                mini=h[i];
                minindex=i;
            }
        }
        long long ans=0;
        if(maxindex>minindex) ans=maxi-mini+maxindex+1;
        else ans=maxi+maxindex;
        cout<<ans<<endl;
    }
}