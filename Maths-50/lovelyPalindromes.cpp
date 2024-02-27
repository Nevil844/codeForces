#include <bits/stdc++.h>
using namespace std;

int main(){
    string n;
    cin>>n;
    for(int i=0; i<n.length(); i++){
        cout<<n[i];
    }
    
    for(int i=n.length()-1; i>=0; i--){
        cout<<n[i];
    }
}