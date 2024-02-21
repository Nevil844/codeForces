#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;
    if(s=="0"){
        cout<<0;
        return 0;
    }
    bool a=0;
    for(int i=1; i<s.length(); i++){
        if(s[i]=='1'){
            a=1;
        }
    }
    cout<<(s.length()+a)/2;
}