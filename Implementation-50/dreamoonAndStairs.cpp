#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,m;
    cin>>n>>m;
    int leastMoves;
    bool gotIt=0;
    if(n%2==0){
        leastMoves=n/2;
    }else{
        leastMoves=n/2 +1;
    }
    while(leastMoves<=n){
        if(leastMoves%m==0){
            cout<<leastMoves;
            gotIt=1;
            break;
        }
        leastMoves++;
    }
    if(!gotIt)
        cout<<-1;
}