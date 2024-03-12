#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<long long> a(n);
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    sort(a.begin(),a.end());
    
    if(a[n-1]>=a[n-2]+a[n-3]){
        cout<<"NO";
        return 0;
    }

    cout<<"YES"<<endl;
    for(int i=n-1; i>=0; i-=2){
        cout<<a[i]<<" ";
    }
    for(int i=n%2; i<n; i+=2){
        cout<<a[i]<<" ";
    }
}