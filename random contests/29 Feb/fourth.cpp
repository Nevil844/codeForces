
#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0; i<n; i++){
            cin>>arr[i];
        }
        sort(arr, arr+n);
        int ans=0;
        ans+=abs(arr[0]-arr[n-2]);
        ans+=abs(arr[n-2]-arr[1]);
        ans+=abs(arr[1]-arr[n-1]);
        ans+=abs(arr[0]-arr[n-1]);
        cout<<ans<<endl;
    }
}