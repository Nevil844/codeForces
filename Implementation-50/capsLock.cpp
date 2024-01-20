#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

int main(){
    string s;
    cin>>s;
    bool a=0;
    for(int i=1; i<s.length(); i++){
        if(s[i]<95){
            a=1;
        }else{
            a=0;
            break;
        }
    }
    if(s.length()==1){
        if(s[0]>95){
            s[0]-=32;
        }else{
            s[0]+=32;
        }
    }
    if(a==1 && s.length()!=1){
        if(s[0]>95){
            s[0]-=32;
        }else{
            s[0]+=32;
        }
        for(int i=1; i<s.length(); i++){
            if(s[i]<95){
                s[i]+=32;
            }
        }
    }
    cout<<s;
}