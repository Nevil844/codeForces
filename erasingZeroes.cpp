#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int count=0, i=0, k=0, size=s.length();
        while(s[i]!='1' && i<size){
            i++;
            // cout<<i;
        }
        while(s[size]!='1' && i<size){
            size--;
            // cout<<size;
        }
        for(int j=i; j<size; j++){
            if(s[j]=='0'){
                count++;
            }
        }
        cout<<count<<endl;
    }
}