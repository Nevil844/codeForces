#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    string s, ans;
    cin>>s;
    bool flag=0;
    for(int i=0; i<s.length()-1; i++){
        if(s[i]!=s[i+1]){
            flag=1;
            ans.push_back(s[i]);
            ans.push_back(s[i+1]);
            break;
        }
    }
    if(flag){
        cout<<"YES"<<endl;
        cout<<ans;
    }else{
        cout<<"NO";
    }
}