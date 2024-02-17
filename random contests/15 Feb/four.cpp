#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        long long arr[2*n], sum=0;
        for(int i=0; i<2*n; i++){
            cin>>arr[i];
        }
        sort(arr, arr+2*n);
        for(int i=0; i<2*n; i+=2){
            sum+=(min(arr[i],arr[i+1]));
        }
        cout<<sum<<endl;
    }
}