#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,ans;
    cin>>n;
    int cubesAtALevel=0, totalCubes=0;
    for(int i=1; i<=n; i++){
        cubesAtALevel=(i*(i+1))/2;
        totalCubes+=cubesAtALevel;
        if(totalCubes<=n){
            ans=i;
        }else{
            break;
        }
    }
    cout<<ans;
}