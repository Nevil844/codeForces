#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        int oddCount=0;
        for(int i=0; i<n; i++){
            cin>>arr[i];
            if(arr[i]%2!=0){
                oddCount++;
            }
        }
        if(oddCount==n){
            if(n%2==0){
                cout<<"NO"<<endl;
            }else{
                cout<<"YES"<<endl;
            }
        }else if(oddCount>0){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
}