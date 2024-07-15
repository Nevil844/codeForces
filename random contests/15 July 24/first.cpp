#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n,k;
        cin>>n>>k;
        int cnt=0;
        while(n>1){
            n-=(k-1);
            cnt++;
        }
        cout<<cnt<<endl;
    }
}