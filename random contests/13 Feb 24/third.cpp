#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        for(int i=0; i<n; i++){
            cin>>a[i];
        }
        int front=1;
        int frontnum=a[0];
        for(int i=1; i<n; i++){
            if(a[i-1]==a[i]) front++;
            else break;
        }
        int back=1;
        int backnum=a[n-1];
        for(int i=n-1; i>0; i--){
            if(a[i-1]==a[i]) back++;
            else break;
        }
        int maxi=max(front,back);
        if(frontnum==backnum) cout<<max(0,n-(front+back))<<endl;
        else cout<<max(0,n-maxi)<<endl;
    }
}
