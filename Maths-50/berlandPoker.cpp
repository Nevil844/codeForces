#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m,k;
        cin>>n>>m>>k;
        int cards=n/k;
        if(cards>=m) cout<<m;
        else {
            m-=cards;
            int x=ceil(double(m)/(k-1));
            cout<<cards-x;
        }
        cout<<endl;
    }
}