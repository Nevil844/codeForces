#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n, m, count=0;
        vector <string> arr;
        cin>>n>>m;
        for(int i=0; i<n; i++){
            string s;
            cin>>s;
            arr.push_back(s);
        }
        for(int i=0; i<m; i++){
            if((arr[n-1][i])=='D'){
                count++;
            }
        }
        for(int i=0; i<n; i++){
            if(arr[i][m-1]=='R'){
                count++;
            }
        }
        cout<<count<<endl;
    }   
}