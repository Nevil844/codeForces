#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int zee=(n-2)/26;
        if(zee==0) cout<<'a'<<'a'<<char(n-3+'a')<<endl;
        else if(zee==1) cout<<'a'<<char(n-28+'a')<<'z'<<endl;
        else if(zee==2) cout<<char(n-53+'a')<<'z'<<'z'<<endl;
    }
}