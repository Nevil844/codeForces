#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        long long a,b,c,n;
        cin>>a>>b>>c>>n;
        long long totalCoins=a+b+c+n;
        if(totalCoins%3==0){
            if(a>totalCoins/3 || b>totalCoins/3 || c>totalCoins/3){
                cout<<"NO"<<endl;
            }else{
                cout<<"YES"<<endl;
            }
        }else{
            cout<<"NO"<<endl;
        }
    }
}