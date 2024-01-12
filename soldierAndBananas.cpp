#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
    int k,w;
    long long n,cost, totalCost=0;
    cin>>k>>n>>w;
    for(int i=1; i<=w; i++){
        cost=k*i;
        totalCost+=cost;
    }
    if(totalCost-n>0){
        cout<<totalCost-n;
    }else{
        cout<<0;
    }
    
}