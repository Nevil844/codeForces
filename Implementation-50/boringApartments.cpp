#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int x,ans,count=0;
        cin>>x;
        int digit=x%10;
        while(x>0){
            x/=10;
            count++;
        }
        // cout<<count<<digit;
        ans=10*(digit-1);

        ans+=(count*(count+1)/2);
        cout<<ans<<endl;
    }
}