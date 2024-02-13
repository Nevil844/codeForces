
#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        long long a[n];
        int sum=0;
        for(int i=0; i<n; i++){
            cin>>a[i];
            sum+=a[i];
        }
        double per=sum/n;
        int rem=0;
        bool ans=1;
        for(int i=0; i<n; i++){
            if(rem+a[i]<per){
                cout<<"NO\n";
                ans=0;
                break;
            }
            rem+=a[i]-per;
        }
        if(ans) cout<<"YES\n";
    }
}