#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        long long a[n], ans=0;
        for(int i=0; i<n; i++){
            cin>>a[i];
        }
        sort(a,a+n);
        for(int i=1; i<n; i++){
            ans+=a[i]-a[i-1];
        }
        cout<<ans<<endl;
    }
}