#include <iostream>
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
        int size=s.length();
        int start=0;
        int end=size-1;
        bool flag=1;
        while(start<end){
            if(s[start]+1!=s[end]+1 && s[start]+1!=s[end]-1 && s[start]-1!=s[end]+1 && s[start]-1!=s[end]-1){
                cout<<"NO"<<endl;
                flag=0;
                break;
            }
            start++;
            end--;
        }
        if(flag)cout<<"YES"<<endl;
    }
}