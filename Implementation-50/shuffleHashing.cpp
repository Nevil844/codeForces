#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){    
    int t;
    cin>>t;
    while(t--){
        string p;
        cin>>p;
        string h;
        cin>>h;
        sort(p.begin(), p.end());
        int len=p.length();
        string ans;
        bool flag=0;
        for(int i=0; i<h.length(); i++){
            ans=h.substr(i,len);
            sort(ans.begin(), ans.end());
            if(p==ans){
                cout<<"YES"<<endl;
                flag=1;
                break;
            }
        }
        if(!flag){
            cout<<"NO"<<endl;
        }
    }
}