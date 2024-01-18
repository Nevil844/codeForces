#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
    int k;
    string s,ans;
    cin>>k>>s;
    bool a=1;
    sort(s.begin(),s.end());
    for(int i=0; i<s.length(); i+=k){
        for(int j=i; j<i+k-1; j++){
            if(s[j]!=s[j+1]){
                a=0;
                break;
            }
        }
        ans.push_back(s[i]);
    }
    if(a){
        for(int i=0; i<(s.length()/ans.length()); i++){
            cout<<ans;
        }
        cout<<endl;
    }else{
        cout<<-1<<endl;
    }
}