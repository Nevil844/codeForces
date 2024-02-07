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
        int count[n]={0};

        char ch='a';
        for(int i=0; i<n; i++){
            char ans=ch+count[arr[i]];
            count[arr[i]]++;
            cout<<ans;
        }
        cout<<endl;
    }
}