#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
    string s,ans;
    cin>>s;
    for(int i=0; i<s.length(); i++){
        if(s[i]<96){
            s[i]=s[i]+32;
        }
        if(s[i]=='a' || s[i]=='o' || s[i]=='y' || s[i]=='e' || s[i]=='u' || s[i]=='i'){
            continue;
        }else{
            ans.push_back('.');
            ans.push_back(s[i]);
        }
    }
    cout<<ans;
}