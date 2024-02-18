#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        long long sum=0, a[n];
        for(int i=0; i<n; i++){
            cin>>a[i];
        }
        for(int i=0; i<n; i++){
            if(sum<a[i]){
                sum=a[i];
            }else{
                int div=sum/a[i];
                sum=(div+1)*a[i];
                // cout<<sum<<" ";
            }
        }
        cout<<sum<<endl;
    }
}