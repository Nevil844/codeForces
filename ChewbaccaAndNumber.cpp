#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,i,ans;
    cin>>n;
    vector <int> result;
    bool a=0;
    if(n==0){
        cout<<0;
        a=1;
    }
    while(n>0){
        int digit=n%10;
        if(digit>=5 && digit!=9){
            digit=9-digit;
            a=1;
        }else{
            result.insert(result.begin(),digit);
            a=1;
        }
        n/=10;
    }
    ans=0;
    int len=result.size();
    for(i=0; i<len;i++){
        cout<<result[i];
    }
}