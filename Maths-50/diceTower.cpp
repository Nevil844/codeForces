#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        long long x;
        cin>>x;
        int possible=x%14;
        if((x>14) && (possible==1 || possible==2 || possible==3 || possible==4 || possible==5 || possible==6)){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
}