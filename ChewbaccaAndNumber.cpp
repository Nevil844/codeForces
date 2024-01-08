#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
    int i,ans;
    long long int n;
    cin>>n;
    vector <int> result;
    bool a=0;
    if(n==0){
        cout<<0;
        // a=1;
    }
    while(n>0){
        int digit=n%10;
        result.push_back(digit);
        n/=10;
    }
    ans=0;
    int len=result.size();
    // for(i=0; i<len;i++){
    //     cout<<result[i];
    // }
    for(i=len-1;i>=0; i--){
        if(result[i]==9 && a==0){
            a=1;
            continue;
        }
        else if(result[i]>=5){
            result[i]=9-result[i];
            a=1;
        }
        a=1;
    }
    for(i=len-1; i>=0;i--){
        cout<<result[i];
    }
}