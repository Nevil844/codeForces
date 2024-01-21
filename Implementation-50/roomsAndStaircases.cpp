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
        int ans=0;
        for(int i=0; i<s.length(); i++){
            if(s[i]=='0')
                ans+=1;
            else    
                ans+=2;
        }
        int firstOne=-1,lastOne=-1;
        for(int i=0; i<s.length(); i++){
            if(s[i]=='1'){
                firstOne=i;
                break;
            }
        }
        for(int i=s.length()-1; i>=0; i--){
            if(s[i]=='1'){
                lastOne=i;
                break;
            }
        }
        int siz=s.length();
        int maxi=0;
        if(firstOne>=0 && lastOne>=0)
            maxi=max(siz-firstOne,lastOne+1);
        cout<<max(ans,maxi*2)<<endl;
    }
}