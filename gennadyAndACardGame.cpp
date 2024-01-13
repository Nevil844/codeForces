#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
    string table;
    bool ans=0;
    cin>>table;
    string arr[5];
    for(int i=0; i<5; i++){
        cin>>arr[i];
        if(table[0]==arr[i][0] || table[1]==arr[i][1]){
            ans=1;
        }
    }
    if(ans){
        cout<<"YES";
    }else{
        cout<<"NO";
    }
}