#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
    string s,ans;
    cin>>s;
    int one=0,two=0,three=0;
    for(int i=0; i<s.length(); i+=2){
        if(s[i]=='1'){
            one++;
        }else if(s[i]=='2'){
            two++;
        }else if(s[i]=='3'){
            three++;
        }
    }
    for(int i=0; i<s.length(); i++){
        if(i%2==0){
            if(one){
                ans.push_back('1');
                one--;
            }else if(two){
                ans.push_back('2');
                two--;
            }else if(three){
                ans.push_back('3');
                three--;
            }
        }else{
            ans.push_back('+');
        }
    }
    cout<<ans;
}