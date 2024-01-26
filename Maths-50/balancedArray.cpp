#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int even=0;
        int odd=-1;
        int size=n/2;

        if(n%4==0){
            cout<<"YES"<<endl;
            while(size>0){
                even+=2;
                cout<<even<<" ";
                size--;
            }
            size=n/2;
            while(size>1){
                odd+=2;
                cout<<odd<<" ";
                size--;
            }
            cout<<odd+2+n/2<<" "<<endl;
        }else cout<<"NO"<<endl;
    }
}