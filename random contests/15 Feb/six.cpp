#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        int j=n, count=0;
        for(int i=1; i<n; i++){
            if(s[i]=='*' && s[i-1]=='*'){
                j=i;
                break;
            } 
        }
        for(int i=0; i<j; i++){
            if(s[i]=='@') count++;
        }
        cout<<count<<endl;
    }
}