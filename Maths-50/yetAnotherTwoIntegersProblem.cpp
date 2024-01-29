#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        long long a,b,count=0;
        cin>>a>>b;
        long long val=abs(a-b);
        cout<<((val+9)/10)<<endl;
    }
}